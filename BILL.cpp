#include<iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;


int main()
{
	cout<<"Electricity Board Charges"<<endl;
	cout<<"To discourage large consumption of energy"<<endl;
	char name[20];
	cout<<"Enter number of units consumed :-"<<endl;
	float unit;
	cin>>unit;
	//MANIPULATION
	float total_cost;
	if(unit<=100)
		total_cost=unit*0.40;
	else if(unit>=100&&unit<=300)
		total_cost=unit*0.50;
	else
		total_cost=unit*0.60;
	float surcharge=0;
	if(total_cost>250)
		surcharge=total_cost*0.15;
	float total_charge;
	total_charge=500+surcharge+total_cost;
	cout<<"YOUR BILL AMOUNT IS\n"<<total_charge;
	getch();
	return 0;
}
