/* Consider a class Movie that contains information about a movie. The class has the following attributes:
? The movie name
? The MPAA rating (for example, G, PG, PG-13, r)
? The number of people that have rated this movie as a 1 (Terrible)
? The number of people that have rated this movie as a 2 (Bad)
? The number of people that have rated this movie as a 3 (oK)
? The number of people that have rated this movie as a 4 (Good)
? The number of people that have rated this movie as a 5 (Great)
Implement the class with accessor and mutator functions for the movie name and MPAA rating. Write a
function addRating that takes an integer as an input parameter. The function should verify that the
parameter is a number between 1 and 5, and if so, increment the number of people rating the movie
that match the input parameter. For example, if 3 is the input parameter, then the number of people
that rated the movie as a 3 should be incremented by 1. Write another function, getAverage, that
returns the average value for all of the movie ratings. Finally, add a constructor that allows the
programmer to create the object with a specified name and MPAA rating. The number of people rating
the movie should be set to 0 in the constructor. Test the class by writing a main function that creates at
least two movie objects, adds at least five ratings for each movie, and outputs the movie name, MPAA
rating, and average rating for each movie object. */

#include<iostream>
using namespace std;

class Movie{
	string mname; //movie name
	string rating; // MPAA rating
	int terribler; // number of people that have rated this movie as a 1 (Terrible)
	int badr; // number of people that have rated this movie as a 2 (Bad)
	int okr; // The number of people that have rated this movie as a 3 (oK)
	int goodr; // number of people that have rated this movie as a 4 (Good)
	int greatr; // The number of people that have rated this movie as a 5 (Great)
	
	public:
		//Default Constructor
		Movie()
		{
		}
		Movie(string moviename,string mrating)
		{
			
			
			terribler=0;
			badr=0;
			goodr=0;
			greatr=0;
			
			
			mname=moviename;
			rating=mrating;
			
		}

//setter and getter functions		
void setmname(string moviename)
{
	mname=moviename;
}

string getmname()
{
	return mname;
}

void setrating(string mpaarating)
{
	rating=mpaarating;
}

string getrating()
{
	return rating;
}

void addrating(int r)
{
	if(r>=1 && r<=5)
	{
		if(r==1)
		{
			terribler+=r;
		}
		else if(r==2)
		{
			badr+=r;
		}
		else if(r==3)
		{
			okr+=r;
		}
		else if(r==4)
		{
			goodr+=r;
		}
		else if(r==5)
		{
			greatr+=r;
		}
    }
    else 
    {
    	cout<<"Incorrect Rating Entered !!";
	}
	
}

float getaverage()
{
	float avg;
	float sum;
	sum=(terribler*1)+(badr*2)+(okr*3)+(goodr*4)+(greatr*5);
	avg=sum/5;
	
	return avg;
}
	
};

int main()
{
	
	int rate1,rate2,rate3,rate4,rate5;
	int srate1,srate2,srate3,srate4,srate5;
	string mrating,mrating2;
	string mname,mname2;
	
	cout<<"\nEnter Movie Name :";
	getline(cin,mname);
	
	
	cout<<"\nEnter MPAA Rating : ";
	getline(cin,mrating);
	
	
	Movie mov1(mname,mrating);
	
	

	cout<<"\nEnter rating  :";
	cin>>rate1;
	mov1.addrating(rate1);
	
	cout<<"\nEnter rating  :";
	cin>>rate2;
	mov1.addrating(rate2);
	
	cout<<"\nEnter rating  :";
	cin>>rate3;
	mov1.addrating(rate3);
	
	cout<<"\nEnter rating  :";
	cin>>rate4;
	mov1.addrating(rate4);
	
	cout<<"\nEnter rating  :";
	cin>>rate5;
	mov1.addrating(rate5);
	
	cout<<"Movie Name : "<<mname;
	cout<<"\nMPPA Rating : <<"<<mrating;
	cout<<"\nAverage of ratings : "<<mov1.getaverage();
	
	
	cout<<"\nEnter Movie Name :";
	getline(cin,mname);
	
	
	cout<<"\nEnter MPAA Rating : ";
	getline(cin,mrating);	
	
	Movie mov2(mname2,mrating2);
	

	cout<<"\nEnter rating  :";
	cin>>srate1;
	mov2.addrating(srate1);
	
	cout<<"\nEnter rating  :";
	cin>>srate2;
	mov2.addrating(srate2);
	
	cout<<"\nEnter rating  :";
	cin>>srate3;
	mov2.addrating(srate3);
	
	cout<<"\nEnter rating  :";
	cin>>srate4;
	mov2.addrating(srate4);
	
	cout<<"\nEnter rating  :";
	cin>>srate5;
	mov2.addrating(srate5);
	
	cout<<"Movie Name : "<<mname2;
	cout<<"\nMPPA Rating : <<"<<mrating2;
	cout<<"\nAverage of ratings : "<<mov2.getaverage();
	
	
	
    
    
    
	

	
	
	
	
	
	
	
}



