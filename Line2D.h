#ifndef LINE2D_H
#define LINE2D_H

#include "Point2D.h"
 

using namespace std;

class Line2D{
    private:
    Point2D pt1, pt2;

    protected:
    double length;
    void setLength();
    
    public:
    Line2D(Point2D pt1, Point2D pt2);
    Line2D();
    
    //getter
    Point2D getPt1() const;
    Point2D getPt2() const;
    double getScalarValue() const;
    
    //setter
    void setPt1(Point2D pt1);
    void setPt2(Point2D pt2);

    
    bool operator==(const Line2D &l2d) const;

    double operator-(const Line2D &l2d) const;
   

    friend ostream &operator<<(ostream &os, const Line2D &l2d);
};

#endif