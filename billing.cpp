/* This programming exercise demonstrates a program that calculates a customer’s bill
for a local cable company. There are two types of customers: residential and business.
There are two rates for calculating a cable bill: one for residential customers and one
for business customers. For residential customers, the following rates apply:
- Bill processing fee: $4.50
- Basic service fee: $20.50
- Premium channels: $7.50 per channel.
For business customers, the following rates apply:
- Bill processing fee: $15.00
- Basic service fee: $75.00 for first 10 connections, $5.00 for each additional
connection
- Premium channels: $50.00 per channel for any number of connections
The program should ask the user for an account number (an integer) and a customer
code. Assume that R or r stands for a residential customer, and B or b stands for a
business customer
Input: The customer’s account number, customer code, number of premium
channels to which the user subscribes, and, in the case of business customers, number
of basic service connections. */

#include<iostream>
using namespace std;

float businesstotal(int x,int y)
{
	float total;
	
	if (y<=10)
	{
		total=15+75+(50*x);
	}
	
	else{
		total=15+75+((y-10)*5)+(50*x);
	}
	
	return total;
}

float residentialtotal(int a)
{
	float total; 
	total=4.5+20.5+(a*7.5);
	
	return total; 
}
main()
{
	char choice;
	int anum,prem_chan,serviceconn;
	string ccode;
	
	cout<< "Press r for residential and b for business customer : ";
	cin>>choice;
	
	cout<<"Enter Account Number : \n";
	cin>>anum;
	
	cout<<"\nEnter Customer Code : ";
	cin>>ccode;
	
	cout<<"Enter Number of Premium Channels : ";
	cin>>prem_chan;
	
	if (choice =='b')
	{
		cout<<"\nEnter Number of basic service connectons : ";
		cin>>serviceconn;
		
		
	cout<<"Account Number : "<<anum;
	cout<<"\nBilling Amount : "<<businesstotal(prem_chan,serviceconn);
	}
	
	else
	{
	cout<<"Account Number : "<<anum;
	cout<<"Billing Amount : "<<residentialtotal(prem_chan);
	}
	

	
}
