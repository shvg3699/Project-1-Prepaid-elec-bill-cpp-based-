#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void random(char* str)
{
	int i,j,b;
	char p[16];
	srand(time(0));
	
		b=3;
		
	for(i=0;i<16;i++)
	{	
		p[i]=rand()%10;
	
	} 
	p[16]='\0';
	cout<<endl;
	for(j=0;j<16;j++)
	{
		str[j]=p[j];
	}
	str[j]='\0';	
}

int main()
{	
	int i;
	char ptr[16];
	random(ptr);
	for(i=0;i<16;i++)
	{
	cout<<ptr[i];
	}
	return 0;
}
