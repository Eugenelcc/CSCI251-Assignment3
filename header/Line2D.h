#ifndef LINE2D_H
#define LINE2D_H

#include "Point2D.h"
#include "menu.h"

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
    Point2D getPt1();
    Point2D getPt2();
    double getLength();
    
    //setter
    void setPt1(Point2D pt1);
    void setPt2(Point2D pt2);

    
    bool operator==(const Line2D &l2d) const;
   
};

#endif