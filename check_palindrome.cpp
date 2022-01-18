#include<iostream>
using namespace std;

void check_palindrome(int arr[],int s)
{
	
	int count=0;
	
	
	for(int i=0;i<s;i++)
	{
		while (arr[i] != 0) {
        arr[i]=arr[i]/10;    
        ++count;
        
    }
    
    
    
	}
	
	int digits[count];
	for(int i=0;i<s;i++)
	{
		
		
		for(int j=0;j<count;j++)
		{
		while(arr[i]!=0)
		{
			digits[j]=arr[i]%10;
			arr[i]=arr[i]/10;
		}
		
	}
		
		
	}
	
	for(int i=0;i<count;i++)
	{
		cout<<digits[i]<<endl;
	}
}






int main()
{
	int size;
	
	cout<<"Enter Size of Array"<<endl;
	cin>>size;
	
	int array[size];
	
	cout<<"Enter "<<size<<"Elements :"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];
	}
	
	check_palindrome(array,size);
	
}
