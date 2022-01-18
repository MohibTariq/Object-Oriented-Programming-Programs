

#include<iostream>
using namespace std;

class HeartRates{
	string fname; // first name
	string lname;// last name
	int month;// DOB (month)
	int day;//DOB(day)
	int year;//DOB(year)
	int newage,maxhr;
	float targethr;
	
	public:
	
	HeartRates()
	{
	}	
	
	HeartRates(string firstname,string lastname,int m,int d,int y)
	{
		fname=firstname;
		lname=lastname;
		month=m;
		day=d;
		year=y;
	}
	
	setfname(string firstname)
	{
		fname=firstname;
	}
	
	string getfname()
	{
		return fname;
	}
	
	setlname(string lastname)
	{
		lname=lastname;
	}
	
	string getlname()
	{
		return lname;
	}
	
	setmonth(int monthdob)
	{
		month=monthdob;
	}
	
	int getmonth()
	{
		return month;
	}
	
	setday(int daydob)
	{
		day=daydob;
	}
	
	int getday()
	{
		return day;
	}
	
	setyear(int yeardob)
	{
		year=yeardob;
	}
	
	int getyear()
	{
		return year;
	}
	
	int getage()
	{
		
		int tmonth,tday,tyear;
		
		cout<<"Enter Current Month/Day/Year : ";
		cin>>tmonth>>tday>>tyear;
		newage=tyear-getyear();
		
		if((tmonth-month)>6)
		{
			newage++;
		}
		
		return newage;
		
		
		
	}
	
	int getMaxiumumHeartRate()
	{
	
		
		maxhr=220-newage;
		
		return maxhr;
		
		
	}
	
	float getTargetHeartRate()
	{
		
	
		targethr=0.68*maxhr;// assuming target heart rate to be 68% of the max heart rate
		
		return targethr;
		
	}
	
	
	
};

int main()
{
	string firstname,lastname;
	int month,day,year;
	
	cout<<"Enter First Name : ";
	cin>>firstname;
	
	cout<<"\nEnter Last Name :";
	cin>>lastname;
	
	cout<<"\nEnter Date of Birth : ";
	cout<<"\nEnter Month : ";
	cin>>month;
	cout<<"\nEnter Day :";
	cin>>day;
	cout<<"\nEnter Year :";
	cin>>year;
	
	HeartRates hr(firstname,lastname,month,day,year);
	

	
	cout<<"\nYour Age is : "<<hr.getage();
	
	cout<<"\nMaximum Heart Rate : "<<hr.getMaxiumumHeartRate();
	
	cout<<"\nTarget Heart Range : "<<hr.getTargetHeartRate();
	
	cout<<"\nFirst Name : "<<hr.getfname();
	
	cout<<"\nLast Name : "<<hr.getlname();
	
	
	
}





