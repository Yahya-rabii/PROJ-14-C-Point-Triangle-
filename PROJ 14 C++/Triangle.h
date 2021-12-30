#pragma once
#include "Point.h"
#include "Triangle.h"


class Triangle
{

private:
	Point A;
	Point B;
	Point C;

public:

	Triangle();
	Triangle(Point a, Point b, Point c);
	Triangle(const Triangle &c);
	
	void Translater(double x, double y);
	bool isocele()const;
	bool equilateral()const;
	double perimetre()const;
	void afficher_tri()const;
	
	Triangle operator=(const Triangle& t);


};