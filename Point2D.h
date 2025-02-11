#ifndef POINT2D_h
#define POINT2D_h


#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <cmath>


 

using namespace std;
class Point2D{
    
    protected:
    int x,y;
    double distFrOrign;
    void setDistFrOrign();

    public:
    Point2D(int x , int y);
    Point2D();

    //getter
    int getX();
    int getY();
    double getScalarValue();

    //setter
    void setX(int x);
    void setY(int y);

    bool operator==(const Point2D &p2d) const;

    double operator-(const Point2D &p2d) const;
    friend ostream &operator<<(ostream &os, Point2D &p2d);

};



#endif

