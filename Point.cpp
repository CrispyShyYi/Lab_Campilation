/**
 * Point.cpp
 *
 * EECS 183
 * Lab 7
 * Taken from Project 4: CoolPics
 *
 * Jialiang Wu
 * alfredwu
 *
 * <#Description#>
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.
Point::Point() {
    x = 0;
    y = 0;
}
    
Point::Point(int xVal, int yVal) {
    x = checkRange(xVal);
    y = checkRange(yVal);
}

void Point::setX(int xVal) {
    x = checkRange(xVal);
    return;
}

int Point::getX() {
    return x;
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return 0;
}    

void Point::setY(int yVal) {
    y = checkRange(yVal);
    return;
}
    
int Point::getY() {
    return y;
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return 0;
}

void Point::read(istream& ins) {
    char one, two, three;
    ins >> one >> x >> two >> y >> three;
    x = checkRange(x);
    y = checkRange(y);
    return;
}    

void Point::write(ostream& outs) {
    x = checkRange(x);
    y = checkRange(y);
    outs << "(" << x << "," << y << ")";

    return;
}

int Point::checkRange(int val) {
    if (val <= 0) {
        val = 0;
    }
    else if (val >= DIMENSION) {
        val = DIMENSION - 1;
    }
    return val;
    // FIXME: returning arbitrary value of 0 to avoid compile error
    return 0;
}


// Your code goes above this line!!!
// Don't change the implementations below!!!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}

