#include<iostream>
#include<stdlib.h> /*srand,rand*/
#include<string>
#include<cstdlib>
#include<fstream>

using namespace std;

void random()
{
	int i,j,b;

		b=3;
		
	cout<<"Voucher Code : ";
	for(i=0;i<16;i++)
	{
		cout<<rand()%10;
		if(i==b)
		{
			cout<<" ";
			b=b+4;
		}
	}
	cout<<endl;
	
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
        cout<<"minus ";
        expand(-value);
    }
    else if(value>=1000)
    {
        expand(value/1000);
        cout<<" Thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                cout << " and";
            }
            cout << " " ;
            expand(value % 1000);
        }
    }
    else if(value >= 100)
    {
        expand(value / 100);
        cout<<" Hundred";
        if(value % 100)
        {
            cout << " and ";
            expand (value % 100);
        }
    }
    else if(value >= 20)
    {
        cout << tens[value / 10];
        if(value % 10)
        {
            cout << " ";
            expand(value % 10);
        }
    }
    else
    {
        cout<<ones[value];
        
    }
    return  ;
}


int main()
{
	cout<<"\t\t\tWest Bengal State Electricity Distribution Company Limited"<<endl;
	cout<<"\t\t\t         (A Government Of West Bengal Enterprise)"<<endl<<endl;
	
	
	int loc_code, cus_id, voucher,i,mno;
	char s1[5],s2[20],add[50];
	
	int amount;
	
	cout<<"Enter Customer ID : ";
	cin>>cus_id;
	cout<<endl;
	cout<<"Enter Meter Number(Max 5 Characters) : ";
	cin>>s1;
	cout<<endl;
	cout<<"Enter Consumer Name : ";
	cin>>s2;
	cout<<endl;
	cout<<"Enter Consumer Address : ";
	cin>>add;
	cout<<endl;
	cout<<"Enter Mobile No : ";
	cin>>mno;
	cout<<endl;
	cout<<"Enter Voucher Amount : ";
	cin>>amount;
	cout<<endl<<endl<<endl;
	
	cout<<"Customer ID Is : ";
	cout<<cus_id;
	cout<<endl;
	cout<<"Meter Number(Max 5 Characters) Is : ";
	cout<<s1;
	cout<<endl;
	cout<<"Consumer Name Is : ";
	cout<<s2;
	cout<<endl;
	cout<<"Consumer Address Is : ";
	cout<<add;
	cout<<endl;
	cout<<"Mobile No Is : ";
	cout<<mno;
	cout<<endl;
	cout<<"Voucher Amount Is : ";
	cout<<amount;
	cout<<"  "<<"(";
	expand(amount);
	cout<<" only)";
    cout<<endl;
	
	random();
	

   
    ofstream f;
    
    
    f.open("D:\\sample.html",ios:: in  | ios:: trunc);
    
    	f<<"<html>"<<endl;
		f<<"<head>"<<endl;
		f<<"<title>"<<endl;
		f<<"Receipt";
		f<<"</title>"<<endl;
		f<<"</head>"<<endl;
		f<<"<body>"<<endl;
		f<<"<h1 >";//"style="text-align:center">";
		f<<"<strong>";
		f<<"&emsp;"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<"VOUCHER DETAILS";
		f<<"</strong>";
		f<<"</h1>"<<endl;
		f<<"<hr>";
		f<<"<table align=""center"" border=""2""width=""600"" height=""50"">"<<endl;//align="center">";
		f<<"<tr>"<<endl;
		f<<"<td>"<<endl;
	//	f<<"<img src="C:\\Users\Sunny\Desktop\project\WBSEDCL-logo.png;" >"; //style="width:150;height:200;" />";
		f<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<"&emsp;";
;
		f<<"</td>"<<endl;
		f<<"<td>"<<endl;
		f<<"<p >"<<endl; //"style="text-align:center;">";
		f<<"<strong>";
		f<<"<h3>";
		f<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"" WEST BENGAL STATE ELECTRICITY DISTRIBUTION COMPANY LIMITED"<<endl;
		f<<"</h3>";
		f<<"</strong>";
		f<<"&emsp;"<<"&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp;"<<"[A GOVERNMENT OF WEST BENGAL ENTERPRISE]";
		f<<"</p>"<<endl;
		f<<"</td>"<<endl;
		f<<"</tr>"<<endl;
		f<<"</table>"<<endl;
		f<<"<hr>";
		f<<"<h5>"<<endl; //"style="text-align:center;">";
		f<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&emsp;"<<"&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp"<<"&nbsp;&nbsp;&nbsp;&nbsp;"" Please visit our official website www.wbsedcl.in for online payment"<<endl;
		f<<"</h5>"<<endl;
		f<<"<table>"<<endl; //" border="1" align="center">";
		f<<"<tr>"<<endl;
		f<<"<td>"<<endl;
		f<<"<br /><br />"<<endl;
		f<<"LOCATION CODE:";
		f<<"<B>";f<<" 3191300"; f<<"</B>"<<endl;
		f<<"<br /><br />";
		f<<"CUSTOMER CARE CENTER NAME:";
		f<<"<B>"; f<<" NEWTOWN ACTION AREA 111 CCC"; f<<"</B>"<<endl;
		f<<"<br /><br />"<<endl;
		f<<"CUSTOMER CARE CENTER NUMBER:";
		f<<"<B>"; f<<" 7603090147";f<<"</B>"<<endl;    
		f<<"<br /><br />";
		f<<"CUSTOMER ID: ";
		f<<"<B>";   f<<cus_id;  f<<"</B>"<<endl;	
		f<<"<br /><br />";
		f<< " METER NUMBER: ";
		f<<"<B>";  f<<s1; f<<"</B>"<<endl;
		f<<"<br /><br />";
		f<<"CONSUMER NAME: ";
		f<<"<B>";  f<<s2; f<<"</B>"<<endl;	
		f<<"<br /><br />";
		f<<"CONSUMER ADDRESS: ";
		f<<"<B>";   f<<add; f<<"</B>"<<endl;
		f<<"<br /><br />";
		f<<"MOBILE NO : ";
		f<<"<B>";  f<<mno;  f<<"</B>"<<endl;
		f<<"<br /><br />";
		f<< "VOUCHER DATE: ";
		f<<"<B>"; f<<"23.6.2018";  f<<"</B>"<<endl; 
		f<<"<br /><br />";
		f<<"VOUCHER AMOUNT: ";
		f<<"<B>"; f<<amount;  f<<"</B>"<<endl;
		//f<<expand(amount);
		
		
   	//	f<<" only.)";
		f<<"<br /><br />";
		f<<"GENERATION MODE: ";
		f<<"<B>";  f<<"CASHDESK";  f<<"</B>"<<endl;
		f<<"<br /><br /><strong>";
		f<<"VOUCHER CODE: ";
		f<<"<B>";   f<<"1740 9488 2455 1711";       f<<"</B>"<<endl;
		f<<"<br />"<<endl;
		f<<"</td>"<<endl;
		f<<"</tr>"<<endl;
		f<<"</table>"<<endl;
		f<<"<hr>";
		f<<"</body>"<<endl;
		f<<"</html>";
   
	
    
	return 0 ;
}
