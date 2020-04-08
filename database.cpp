#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<cstdlib>
#include<iomanip>


void random()
{
	int i,j,b,tmp;

		b=3;
		
	std::cout<<"Voucher Code : ";
	for(i=0;i<16;i++)
	{
		std::cout<<rand()%10;
		if(i==b)
		{
			std::cout<<" ";
			b=b+4;
		}
	}
	std::cout<<std::endl;
	
}


void expand(int value)


{
    const char * const ones[20] = {"Zero", "One", "Two", "Three","Four","Five","Six","Seven",
    "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen",
    "Eighteen","Nineteen"};
    const char * const tens[10] = {"", "Ten", "Twenty", "Thirty","Forty","Fifty","Sixty","Seventy",
    "Eighty","Ninety"};

    if(value<0)
    {
        std::cout<<"minus ";
        expand(-value);
    }
    else if(value>=1000)
    {
        expand(value/1000);
        std::cout<<" Thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                std::cout << " and";
            }
            std::cout << " " ;
            expand(value % 1000);
        }
    }
    else if(value >= 100)
    {
        expand(value / 100);
        std::cout<<" Hundred";
        if(value % 100)
        {
            std::cout << " and ";
            expand (value % 100);
        }
    }
    else if(value >= 20)
    {
        std::cout << tens[value / 10];
        if(value % 10)
        {
            std::cout << " ";
            expand(value % 10);
        }
    }
    else
    {
        std::cout<<ones[value];
        
    }
    return  ;
}


int main()

{
	int tmp;
	std::cout<<"\t\t\tWest Bengal State Electricity Distribution Company Limited"<<std::endl;
	std::cout<<"\t\t\t         (A Government Of West Bengal Enterprise)"<<std::endl<<std::endl;
	
	
	int loc_code, cus_id, voucher,i,s1;
	double mno;
	char s2[20],add[50];

	int amount;
	
	std::cout<<"Enter Customer ID : ";
	std::cin>>cus_id;
	std::cout<<std::endl;
	std::cout<<"Enter Meter Number(Max 5 Characters) : ";
	std::cin>>s1;
	std::cout<<std::endl;
	std::cout<<"Enter Consumer Name : ";
	std::cin>>s2;
	std::cout<<std::endl;
	std::cout<<"Enter Consumer Address : ";
	std::cin>>add;
	std::cout<<std::endl;
	std::cout<<"Enter Mobile No : ";
	std::cin>>mno;
	std::cout<<std::endl;
	std::cout<<"Enter Voucher Amount : ";
	std::cin>>amount;
    std::cout<<std::endl;
	
	std::cout<<std::endl<<std::endl<<std::endl;
	
	std::ofstream f; 
    std::string sFileName;

  	 FILE *fp;
	fp=fopen("k.html","r");
	if(fp)
		{		
			for(char c('l'); c < 'm'; c++)
   		 		{
       			 sFileName =  c;
        		sFileName += ".html";
        		f.open(sFileName.c_str(), std::ios::out | std::ios::trunc);
   
        		f.close(); 
    			}
			
		}


	if(!fp) 
	{
		 	for(char c('k'); c < 'l'; c++)
   		 {
       			 sFileName =  c;
        		sFileName += ".html";
        		f.open(sFileName.c_str(), std::ios::out | std::ios::trunc);
   
        		f.close(); 
    	}
	}

	std::cout<<"Customer ID Is : ";
	std::cout<<cus_id;
	std::cout<<std::endl;
	std::cout<<"Meter Number(Max 5 Characters) Is : ";
	std::cout<<s1;
	std::cout<<std::endl;
	std::cout<<"Consumer Name Is : ";
	std::cout<<s2;
	std::cout<<std::endl;
	std::cout<<"Consumer Address Is : ";
	std::cout<<add;
	std::cout<<std::endl;
	std::cout<<"Mobile No Is : ";
	std::cout<<std::setprecision(13)<<mno;
	std::cout<<std::endl;
	std::cout<<"Voucher Amount Is : ";
	std::cout<<amount;
	std::cout<<"  "<<"(";
	expand(amount);
	std::cout<<" only)";
	std::cout<<std::endl;
	
	tmp=rand();
	if(sFileName=="l.html")
		{
		//std::cout<<"Voucher Code Is : "<<"8963 9488 2001 1001";  
			tmp=rand();
		}
	
	else if(sFileName=="k.html")
		   {
				tmp=rand();
	       } 
		
    

    	char buffer[500]={'0'};
        
    
    f.open(sFileName.c_str(), std::ios::out | std::ios::trunc);
    
    	sprintf(buffer,"logo.png");
    	
    	f<<"<html>"<<std::endl;
		f<<"<head>"<<std::endl;
		f<<"<title>"<<std::endl;
		f<<"Receipt";
		f<<"</title>"<<std::endl;
		f<<"</head>"<<std::endl;
		f<<"<body>"<<std::endl;
		f<<"<h1 align=""center"">";//"style="text-align:center">";
		f<<"<strong>";
		f<<"<U>";
		f<<"VOUCHER DETAILS";
		f<<"</U>";
		f<<"</strong>";
		f<<"</h1>"<<std::endl;
		f<<"<hr>";
		f<<"<table>"<<std::endl;//align="center">";
		f<<"<tr>"<<std::endl;
		f<<"<td>"<<std::endl;
		f<<"&emsp;"<<"&emsp;"<<"<img src="<<"\""<<buffer<<"\""<<"widht=""150"" height=""150""/ >"; //style="width:150;height:200;" />";
		f<<"</td>"<<std::endl;
		
		f<<"<td>"<<std::endl;
		f<<"<p >"<<std::endl; //"style="text-align:center;">";
		f<<"<strong>";
		f<<"<h3>";
		f<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<" WEST BENGAL STATE ELECTRICITY DISTRIBUTION COMPANY LIMITED"<<std::endl;
		f<<"</h3>";
		f<<"</strong>";
		f<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"[A GOVERNMENT OF WEST BENGAL ENTERPRISE]";
		f<<"</p>"<<std::endl;
		f<<"</td>"<<std::endl;
		f<<"</tr>"<<std::endl;
		
		f<<"</table>"<<std::endl;
		f<<"<hr>";
		f<<"<h5 align=""center"">"<<std::endl; //"style="text-align:center;">";
		f<<" Please visit our official website www.wbsedcl.in for online payment"<<std::endl;
		f<<"</h5>"<<std::endl;
		
		f<<"<table align=""center"" border=""2""width=""600"" height=""50"">"<<std::endl; //" border="1" align="center">";
		f<<"<tr>"<<std::endl;
		f<<"<td>"<<std::endl;
		f<<std::endl;
		f<<"LOCATION CODE:";
		f<<"<B>";f<<" 3191300"; f<<"</B>"<<std::endl;
		f<<"<br /><br />";
		f<<"CUSTOMER CARE CENTER NAME:";
		f<<"<B>"; f<<" NEWTOWN ACTION AREA 111 CCC"; f<<"</B>"<<std::endl;
		f<<"<br /><br />"<<std::endl;
		f<<"CUSTOMER CARE CENTER NUMBER:";
		f<<"<B>"; f<<" 7603090147";f<<"</B>"<<std::endl;    
		f<<"<br /><br />";
		f<<"CUSTOMER ID: ";
		f<<"<B>";   f<<cus_id;  f<<"</B>"<<std::endl;	
		f<<"<br /><br />";
		f<< " METER NUMBER: ";
		f<<"<B>";  f<<s1; f<<"</B>"<<std::endl;
		f<<"<br /><br />";
		f<<"CONSUMER NAME: ";
		f<<"<B>";  f<<s2; f<<"</B>"<<std::endl;	
		f<<"<br /><br />";
		f<<"CONSUMER ADDRESS: ";
		f<<"<B>";   f<<add; f<<"</B>"<<std::endl;
		f<<"<br /><br />";
		f<<"MOBILE NO : ";
		f<<"<B>";  f<<std::setprecision(13)<<mno;  f<<"</B>"<<std::endl;
		f<<"<br /><br />";
		f<< "VOUCHER DATE: ";
		f<<"<B>"; f<<"23.6.2018";  f<<"</B>"<<std::endl; 
		f<<"<br /><br />";
		f<<"VOUCHER AMOUNT: ";
		f<<"<B>";
		f<<"Rs. ";
		f<<amount; 
		f<<"</B>"<<std::endl;
		
		f<<"<br /><br />";
		f<<"GENERATION MODE: ";
		f<<"<B>";  f<<"CASHDESK";  f<<"</B>"<<std::endl;
		f<<"<br /><br /><strong>";
		f<<"VOUCHER CODE: ";
		f<<"<B>"; 
		
		if(sFileName=="l.html")
		{
			//f<<"8963 9488 2001 1001";  
			f<<rand();
		}
		
		else
		{
			 //f<<"1740 9488 2455 1711";
			 f<<rand();
		}  
		 
		f<<"</B>"<<std::endl;
		f<<"<br />"<<std::endl;
		f<<"</td>"<<std::endl;
		f<<"</tr>"<<std::endl;
		f<<"</table>"<<std::endl;
		f<<"<br /><br />";
		f<<"<hr>";
		f<<"</body>"<<std::endl;
		f<<"</html>";
   									
		return 0;
	
}
