// class template:
//Create a c++ class called mycontainer that can store one element of any type and that it has just one
//member function called increase, which increases its value. But we find that when it stores an
//element of type char it would be more convenient to have a completely different implementation with
//a function member uppercase, declare a class template specialization for that type



#include<iostream>
using namespace std;


template <class T>
class mycontainer {
    T element;
  public:
  	
  	mycontainer()
  	{
	}
	
    mycontainer (T e)
	 {
	 element=e;
	 }
	 
    T increase ()
	{
	return ++element;
	}
};

template <>
class mycontainer <char> {
    char element;
  public:
  	
  	mycontainer()
  	{
  		
	 }
    mycontainer (char e) 
	{
	element=e;
	}
	
    char uppercase ()
    {
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};

int main () {
  mycontainer<int> intobj (8);
  mycontainer<char> charobj ('n');
  
  cout << intobj.increase() << endl;
  cout << charobj.uppercase() << endl;

}

