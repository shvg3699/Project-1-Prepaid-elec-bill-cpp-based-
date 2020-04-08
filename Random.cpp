#include <iostream>
#include<string>
#include<stdlib.h> /*srand,rand*/
using namespace std;
string random(int len)

{
    srand ((0));
    string str="123456789";
    string newstr;
    int pos;
    while(newstr.size()!=len)
    {
        pos=((rand()%(str.size()-1)));
        newstr+=str.substr(pos,1);
    }
    return newstr;
}
int main()
{
    string random_str=random(20);
    cout<<"random_str:"<<random_str<<endl;
}
