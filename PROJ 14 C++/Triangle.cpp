#include "Point.h"
#include "Triangle.h"
#include <iostream>
#include <math.h>

using namespace std;

Triangle::Triangle()
{
	this->A;
	this->B;
	this->C;

}

Triangle::Triangle(Point a1, Point b1, Point c1)
{

	this->A = a1;
	this->B = b1;
	this->C = c1;

}

Triangle::Triangle(const Triangle& T)
{

	this->A = T.A;
	this->B = T.B;
	this->C = T.C;

}

void Triangle::Translater(double x, double y)
{

	this->A.translater_pt(x, y);
	this->B.translater_pt(x, y);
	this->C.translater_pt(x, y);

}

bool Triangle::isocele() const
{


	double	AB = this->A.distance(this->B);
	double	AC = this->A.distance(this->C);
	double  BC = this->B.distance(this->C);

	if (AB == AC || AC ==BC || AB==BC ) {

		return true;

	}

	else
	{
		return false;
	}



}

bool Triangle::equilateral() const
{



	double	AB = this->A.distance(this->B);
	double	AC = this->A.distance(this->C);
	double  BC = this->B.distance(this->C);

	if (AB == AC == BC) {

		return true;

	}

	else {

		return false;
	}


}

double Triangle::perimetre() const
{
	double perime=0;

	double	AB = this->A.distance(this->B);
	double	AC = this->A.distance(this->C);
	double  BC = this->B.distance(this->C);

	perime = AB + AC + AC;

	return perime;

}

void Triangle::afficher_tri() const
{

	this->A.affichage_pt();
	this->B.affichage_pt();
	this->C.affichage_pt();

}

Triangle Triangle::operator=(const Triangle& t)
{
	{
		if (this != &t) {

			this->A = t.A;
			this->B = t.B;
			this->C = t.C;

		}

		return *this;
	}
}
