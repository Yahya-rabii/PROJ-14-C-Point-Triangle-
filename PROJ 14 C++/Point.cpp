#include "Point.h"
#include "Triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

Point::Point()
{
	this->X = 0;
	this->Y = 0;

}

Point::Point(double X, double Y)
{
	this->X = X;
	this->Y = Y;


}

Point::Point(const Point& P)
{

	this->X = P.X;
	this->Y = P.Y;
}

void Point::translater_pt(double X, double Y)
{

	this->X += X;
	this->Y += Y;

}

double Point::distance(const Point& p) const
{
	
	double dis=0;

	dis = sqrt(pow(p.X - this->X, 2) + pow(p.Y - this->Y, 2));

		return dis;
}

void Point::affichage_pt() const
{

	cout << "X = " << this->X <<endl;
	cout << "Y = " << this->Y <<endl;


}

Point Point::operator=(const Point& A)
{
	if (this != &A) {

		this->X = A.X;
		this->Y = A.Y;


	}

	return *this;
}

bool Point::operator==(const Point& A)
{

	if (this->X == A.X && this->Y == A.Y)
	{

		return true;

	}

	else
	{
		return false;
	}


}
