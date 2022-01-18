#include<iostream>
using namespace std;
class Employee{
	private:
		
		string EmployeeName;
		const int EmployeeId;
	
	public:
		
		Employee(string name,int id):EmployeeId(id)
		{
			EmployeeName=name;
		}
		void set_name(string name)
		{
			EmployeeName=name;
		}
		string get_name()const
		{
			return EmployeeName;
		}
		int get_id()const
		{
 			return EmployeeId;
		}
	
};

int main(){
	Employee Employee1("ABCD",1000),Employee2("PQRS",1001),Employee3("WXYZ",1002);

	cout<<"Employees: "<<endl;
	cout<<"Name: "<<Employee1.get_name()<<endl;
	cout<<"ID: "<<Employee1.get_id()<<endl;
	cout<<"Name: "<<Employee2.get_name()<<endl;
	cout<<"ID: "<<Employee2.get_id()<<endl;
	cout<<"Name: "<<Employee3.get_name()<<endl;
	cout<<"ID: "<<Employee3.get_id()<<endl;
	Employee1.set_name("IJKL");
	
	cout<<"Employee1's name is changed to"<<Employee1.get_name()<<endl;
	cout<<"Name: "<<Employee1.get_name()<<endl;
	cout<<"ID: "<<Employee1.get_id()<<endl;
	
	
	
	
	
}
