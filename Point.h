// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double myX, myY, myZ;

public:
    // Constructors
    Point();                      // default constructor
    Point(double, double, double);// three-argument constructor
    // Mutator methods
    void setX(double);
    void setY(double);
    void setZ(double);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;

    // 
    double distanceTo(const Point&) const;
    
};

// __POINT_H
#endif
