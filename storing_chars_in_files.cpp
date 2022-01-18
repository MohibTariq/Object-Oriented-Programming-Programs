//Write a program to implement I/O operations on characters. I/O operations includes inputting a string,
//calculating length of the string, Storing the String in a file and fetch the stored characters from it.

#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	
	char str[20];
	int i;
	
	cout<<"Enter string :"<<endl;
	cin.getline(str,19);
	
	for( i=0;str[i]!='\0';i++);
	
	cout<<"\nLength of the string '"<<str<<"' is "<<i<<endl;
	
	ofstream fout;
	fout.open("string.txt");
	fout<<str;
	fout.close();
	
	ifstream fin;
	fin.open("string.txt");
	fin>>str;
	cout<<"Contents of File :"<<str<<endl;
	fin.close();
	
	
}
