//Point.cpp
#include <cmath>
#include "Point.h"


Point::Point() : Point(0, 0, 0)
{
}

Point::Point(double x, double y, double z)
	: myX(x), myY(y), myZ(z)
{
}

void Point::setX(double x)
{
	myX = x;
}

void Point::setY(double y)
{
	myY = y;
}

void Point::setZ(double z)
{
	myZ = z;
}

double Point::getX() const
{
	return myX;
}

double Point::getY() const
{
	return myY;
}

double Point::getZ() const
{
	return myZ;
}

double Point::distanceTo(const Point &p) const
{
	double distance;
	double deltaX, deltaY, deltaZ;

	deltaX = myX - p.getX();
	deltaY = myY - p.getY();
	deltaZ = myZ - p.getZ();

	distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2) + pow(deltaZ, 2));

	return distance;
}
