#ifndef LINE3D_H
#define LINE3D_H


#include "menu.h"
#include "Point3D.h"
#include "Line2D.h"

using namespace std; 

class Line3D : public Line2D{
    private:
    Point3D pt1;
    Point3D pt2;
   
    
    protected:
    void setLength();

    public:
    Line3D(Point3D pt1, Point3D pt2);

    //Getter 
    Point3D getPt1();
    Point3D getPt2();


    //setter
    void setPt1(Point3D pt1);
    void setPt2(Point3D pt2);


    bool operator==(const Line3D &l3d) const;
};


#endif