#include<iostream>
using namespace std;

class student{
string sname;
int rollno;
int smarks[4];

public:
void input()
{
cout<<"Enter Student Name : ";
cin>>sname;

cout<<"\nEnter Roll No. :  ";
cin>>rollno;

cout<<"\nEnter marks of 4 subjects :";
for (int i=0;i<=3;i++)
{
cin>>smarks[i];
}
}
float percentage()
{
int sum=0;
float percent;

for(int i=0;i<4;i++)
sum=sum+smarks[i];

percent=(sum/4);

return percent;
}

void display()
{
cout<<"Student name is "<<sname<<endl;
cout<<"Percentage is "<<percentage();
}
};






main()
{
student st;

st.input();
st.display();


}
