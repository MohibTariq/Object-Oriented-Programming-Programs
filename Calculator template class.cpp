//Create a c++ Program to add, subtract, multiply and divide two numbers using class template. Two
//numbers can be of same datatype or combination of different data types.

#include<iostream>
using namespace std;

template <class T>
class Calculator
{
private:
	T num1, num2;
	
public:
	Calculator(T n1, T n2)
	{
		num1 = n1;
		num2 = n2;
	}
	
	
	
	T add() { 
	return num1 + num2; 
	}
	
	T subtract() 
	{
	 return num1 - num2;
	  }
	
	T multiply() 
	{ return num1 * num2; 
	}
	
	T divide() 
	{ return num1 / num2; 
	}
	
	void displayResult()
	{
		
		cout << "Addition : " << add() << endl;
		cout << "Subtraction : " << subtract() << endl;
		cout << "Product : " << multiply() << endl;
		cout << "Division : " << divide() << endl;
	}
};

int main()
{
	Calculator<int> Calc1(2, 1);
	Calculator<float> Calc2(2.4, 1.2);
	
	cout << "Int results:" << endl;
	Calc1.displayResult();
	
	cout << endl << "Float results:" << endl;
	Calc2.displayResult();
	
	
}
