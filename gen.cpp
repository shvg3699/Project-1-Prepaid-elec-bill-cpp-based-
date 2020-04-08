
#include  <iostream> 
#include <fstream>

int main()
{

    std::ofstream out; // you must call out.close() inside loop to be able to open another file for writting otherwise you'll get only the first one "a.txt"
    std::string sFileName;

    for(char c('a'); c < 'f'; c++)
    {
        sFileName =  c;
        sFileName += ".html";
        out.open(sFileName.c_str(), std::ios::out | std::ios::trunc);
    //  std::ofstream out(sFileName.c_str(), std::ios::out); // here you are not obliged to call out.close() because the first out is not the very second and so on...
        out.close(); // very important if you use the same ofstream to open another file
    }

    std::cout << std::endl;
    return 0;
}
