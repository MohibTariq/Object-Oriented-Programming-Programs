/* Design and implement a class dayType that implements the day of the week in a
program. The class dayType should store the day, such as Sun for Sunday. The program
should be able to perform the following operations on an object of type dayType:
? Set the day.
? Print the day.
? Return the day.
? Return the next day.
? Return the previous day.
? Calculate and return the day by adding certain days to the current day. For
example, if the current day is Monday and we add 4 days, the day to be
returned is Friday. Similarly, if today is Tuesday and we add 13 days, the day to
be returned is Monday.
? Add the appropriate constructors.*/

#include<iostream>
using namespace std;

class dayType{
	string day;
	int dnum;
	
	public:
	
void setday(string ndate)
{
	day=ndate;
}

string getday()
{
	cout<<"Day : "<<day;
}

void convertday()
{
	if(day=="Sun")
	{
		dnum=7;
	}
	else if (day=="Mon")
	{
		dnum=1;
	}
	else if(day=="Tue")
	{
		dnum=2;
	}
	else if(day=="Wed")
	{
		dnum=3;
	}
	else if(day=="Thu")
	{
		dnum=4;
	}
	else if(day=="Fri")
	{
		dnum=5;
	}
	else if(day=="Sat")
	{
		dnum=6;
	}
	
	
	
	
	
}

void adddays(int adays)
{
	
	int newday;
	newday=dnum+adays;
	string nameday;
	
	if(newday>7)
	{
		newday=newday-7;
		
	}
	if(newday==1)
	{
		nameday="Monday";
	}
	else if(newday==2)
	{
		nameday="Tuesday";
	}
	else if(newday==3)
	{
		nameday="Wednesday";
	}
	else if(newday==4)
	{
		nameday="Thursday";
	}
	else if(newday==5)
	{
		nameday="Friday";
	}
	else if(newday==6)
	{
		nameday="Saturday";
	}
	else if(newday==7)
	{
		nameday="Sunday";
	}

	
	cout<<"New Day : "<<nameday;
	

}

void prevday()
{
	int nday;
	nday=dnum-1;
	string dday;
	
	if(nday<0)
	{
		nday=nday-1;
		
	}
	if(nday==1)
	{
		dday="Monday";
	}
	else if(nday==2)
	{
		dday="Tuesday";
	}
	else if(nday==3)
	{
		dday="Wednesday";
	}
	else if(nday==4)
	{
		dday="Thursday";
	}
	else if(nday==5)
	{
		dday="Friday";
	}
	else if(nday==6)
	{
		dday="Saturday";
	}
	else if(nday==7)
	{
		dday="Sunday";
	}

	
	cout<<"New Day : "<<dday;
	
}
};

int main()
{
	dayType dt;
	string day;
	int edays;
	int choice;
	cout<<"Enter day : ";
	cin>>day;
	dt.setday(day);
	
	dt.convertday();
	
	cout<<"1.Add Days\n2.Del Days";
	cin>>choice;
	
	switch(choice)
	{
	case 1:{
	
	cout<<"Enter number of days to add : ";
	cin>>edays;
	dt.adddays(edays);
	break;
	}
	case 2:
		{
			dt.prevday();
			break;
		}
		
}
		
	
	
	
	
	
	
	
	
}

	

