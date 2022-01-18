//Write a program to copy the contents of one file to another.



#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
	ifstream fin;
	string str;
	
	
	fin.open("string.txt");
	
	
	
	ofstream fout;
	fout.open("newstring.txt");
	
    while(!fin.eof())
    {

	fout<<str;
	str=fin.get();
	
	
	}
	cout<<"Data Copied";
	
	fin.close();
	fout.close();
	
	
}
