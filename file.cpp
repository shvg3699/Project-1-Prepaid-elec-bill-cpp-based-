#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{	fstream f1;
	int a=0;
	FILE *fp;
	fp=fopen("D:\\fdfse.html","r");
	if(fp)
	cout<<"open";
	else
	{
	cout<<"close";
	a=1;
	}
	if(a==1)
	{
		f1.open("D:\\fdfse.html",ios:: in | ios:: out | ios:: trunc);
	}
	fp=fopen("D:\\fdfse.html","r");
	if(fp)
	cout<<"open";
	else
	{
	cout<<"close";
	a=1;
	}
	return 0;
	
}
