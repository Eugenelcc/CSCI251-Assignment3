#ifndef POINT3D_H
#define POINT3D_H

#include "Point2D.h"


#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;

class Point3D : public Point2D
{
    protected:
    int z;
    void setDistFrOrign();
    
    public:
    Point3D(int x , int y, int z);
    Point3D();
    
    //getter
    int getZ();

    //setter
    void setZ(int z);


    bool operator==(const Point3D &p3d) const;
};

#endif