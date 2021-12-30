#pragma once
#include "Point.h"
#include "Triangle.h"


class Point
{

private:
	double X;
	double Y;


public:
	
	Point();
	Point(double X,double Y);
	Point(const Point& P);
	
	void translater_pt(double X, double Y);
	double distance(const Point &p) const;
	void affichage_pt() const;

	Point operator = (const Point& A);
	bool operator == (const Point& A);

};