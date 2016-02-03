#include <cmath>

#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
	double sideA, sideB, sideC, s; //s is the semiperimeter of the triangle
	double area;

	sideA = a.distanceTo(b);
	sideB = a.distanceTo(c);
	sideC = c.distanceTo(b);

	s = (sideA + sideB + sideC) / 2;

	area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));

	return area;
}


