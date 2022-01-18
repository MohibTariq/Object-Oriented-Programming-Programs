//Take a class Person having two attributes name and age.
//? Include a parametrized constructor to give values to all data members.
//? In main function
//
//i. Create an instance of the person class and name it person1.
//ii. Create a binary file person.bin and write person1 object into it.
//iii. Read the person1 object from the file.
//iv. Return 0




#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

class Person{
	string name;
	int age;
	
	public:
	Person()
	{
	}
	
	Person(string n,int a)
	{
		name=n;
		age=a;
	}
	
	string getname()
	{
		return name;
	}
	
	int getage()
	{
		return age;
	}
	
};

int main()
{
	Person person1("Mohib",20);
	
	ofstream fout;
	fout.open("person.bin",ios::binary);
	fout.write((char*)&person1,sizeof(person1));
	fout.close();
	
	ifstream fin;
	fin.open("person.open",ios::in);
	cout<<person1.getname()<<endl;
	cout<<person1.getage()<<endl;
	
	fin.read((char*)&person1,sizeof(person1));
	
	fin.close();
	
	
}

