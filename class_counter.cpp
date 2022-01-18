//Define a class for a type called CounterType. An object of this type is used to count things, so it records a
//count that is a nonnegative whole number. Include a mutator function that sets the counter to a count given as an
//argument. Include member functions to increase the count by one and to decrease the count by one. Also, include a
//member function that returns the current count value and one that outputs the count. Embed your class definition in a
//test program.

#include<iostream>
using namespace std;

class Countertype{
	void setcount(int num)
	{
		cout=num;
	}
	
	void incrementcount()
	{
		count++;
	}
	
	void decrementcount()
	{
		count--;
	}
	
	void getcount()
	{
		return count;
	}
	
	
};


