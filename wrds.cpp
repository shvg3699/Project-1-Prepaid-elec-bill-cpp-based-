#include<iostream>
#include<fstream>
using namespace std;



int main()
{

     ifstream folder;
     ofstream myfile;
     char buffer[500]={'0'};

     folder.open("/home/tanmay/exp");

     myfile.open ("MY_FILE.html");

     myfile << "<!DOCTYPE html>"<<endl;

     sprintf(buffer,"logo.png");

     myfile<<"<table align=""right"" border=""2""width=""600"" height=""50"">"

           <<"<td><center><a href="<<"\""<<buffer<<"\""<<"target=""_self"">" 

           <<"<img src="<<"\""<<buffer<<"\""<<"width=""150"" height=""100""/>"

           <<"</center></td>"<<endl;

     myfile << "</table></body></html>";

     myfile.close();
     folder.close();
     return 0;
 }
