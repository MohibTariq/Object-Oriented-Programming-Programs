//Design and implement a program that shows the relationship between person, student and
//professor. Your person class must contain two pure virtual functions named getData() of type void
//and isOutstanding() of type bool and as well getName() and putName() that will read and print the
//person name. Class student must consist of function name getData (), which reads the GPA of
//specific person and isOutstanding() function which returns true if the person GPA is greater than 3.5
//else should return false. Class professor should take the respective persons publications in
//getData() and will return true in Outstanding() if publications are greater than 100 else will return
//false . Your main function should ask the user either you want to insert the data in professor or
//student until and unless user so no to add moredata.









#include<iostream>
using namespace std;

class person
{
    protected :
    string name;
    
public:
    void getName()
    {
        cout<<"Enter name: ";
        cin>>name;
    }
    void putName()
    {
        cout<<"Name is: "<<name<<endl;
    }
    
    virtual bool isoutstanding()=0;
    virtual void read()=0;
};

class student:public person
{
protected:
    float gpa;
public:
    void read()
    {
        person::getName();
        cout<<"Enter GPA: ";
        cin>>gpa;
    }
    
    bool isoutstanding()
    {
        if(gpa>=3.5)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

class professor:public person
{
protected:
	
    int num;
    
public:
	
    void read()
    {
        person::getName();
        cout<<"Enter the number of publications: ";
        cin>>num;
    }
    
    bool isoutstanding()
    {
        if(num>=100)
        {
            return true;
        }
        else{
        	
            return false;
        }
        
    }
    
};

int main()
{
    person *p[30];
    int n=0;
    char ch;
    
    do{
        cout<<"Enter \n s(stduent) or p(professor)";
        cin>>ch;
        if(ch== 's')
        {
            p[n]=new student;
        }
        else{
            p[n]=new professor;
        }
        p[n]-> read();
        n++;
        cout<<"Do you want to continue? Y/N ";
        cin>>ch;
    }
        while(ch=='y');
        
        for(int i=0;i<n;i++)
        {
            p[i]->putName();
            if(p[i]->isoutstanding())
            {
                cout<<"The person is outstanding";
            }
            else{
                cout<<"The person is not outstanding";
            }
        }
        
}
