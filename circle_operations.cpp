/* The following formula gives the distance between two points, (x1, y1) and (x2, y2) in
the Cartesian plane:

Given the center and a point on the circle, you can use this formula to find the
radius of the circle. Write a program that prompts the user to enter the center and a
point on the circle. The program should then output the circle’s radius, diameter,
circumference, and area. Your program must have at least the following functions:
a. distance: This function takes as its parameters four numbers that represent two
points in the plane and returns the distance between them.
b. radius: This function takes as its parameters four numbers that represent the
center and a point on the circle, calls the function distance to find the radius of
the circle, and returns the circle’s radius.
c. circumference: This function takes as its parameter a number that represents the
radius of the circle and returns the circle’s circumference. (If r is the radius, the
circumference is 2pr.) */



#include<iostream>
#include<cmath>
using namespace std;

float pi = 3.1416;


float distance(float x1, float x2, float y1, float y2)
{
	float d1, d2, total;

	d1 = pow((x2 - x1), 2);
	d2 = pow((y2 - y1), 2);

	total = sqrt(d1 + d2);
	return total;
}

float radius(int x1, int x2, int y1, int y2)
{
	float r;
	r = distance(x1, x2, y1, y2);
	return r;
}

float circumference(float r)
{
	return (r * 2 * pi);
}

float area(float r)
{
	return (r * r * pi);
}

int main()
{

	int choice;
	float x1, x2, y1, y2, r;

	cout << "1.Distance" << endl << "2.Radius" << endl << "3.Circumference" << endl << "4.Area" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
	{
			  cout << "Enter coordinates of point A" << endl;
			  cin >> x1 >> y1;
			  cout << "Enter coordinates of point B" << endl;
			  cin >> x2 >> y2;
			  cout << distance(x1, x2, y1, y2) << endl;
			  break;
	}
	case 2:
	{
			  cout << "Enter coordinates of point A" << endl;
			  cin >> x1 >> y1;
			  cout << "Enter coordinates centre" << endl;
			  cin >> x2 >> y2;
			  cout << radius(x1, x2, y1, y2) << endl;
			  break;
	}
	case 3:
	{
			  cout << "Enter radius" << endl;
			  cin >> r;
			  cout << circumference(r) << endl;
			  break;
	}
	case 4:
	{
			  cout << "Enter radius" << endl;
			  cin >> r;
			  cout << area(r) << endl;
			  break;
	}
	}
}
