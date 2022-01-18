//Create a c++ Program to swap the data using template function, instead of calling a function by passing a
//value, use call by reference , Two numbers can be of same datatype or combination of different data
//types.

#include<iostream>
using namespace std;

template <class X>

void swapvalues(X &a,X &b)
{
	X temp;
	temp = a;
    a = b;
    b = temp;
    
    cout<<"Value of a after swapping : "<<a<<endl;
    cout<<"Value of b after swapping :"<<b<<endl;
    
}
 
int main()
{
	int x1=4,y1=5;
	float x2=3.5,y2=4.6;
	swapvalues(x1,y1);
	swapvalues(x2,y2);
	
}
