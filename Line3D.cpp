#include "./header/menu.h"
#include "./header/Line3D.h"
#include "./header/Point3D.h"




Line3D::Line3D(Point3D pt1 , Point3D pt2) {
    this->pt1 = pt1;
    this->pt2 = pt2;
    setLength();
}


void Line3D::setLength(){
    length = sqrt(pow(pt1.getX() - pt2.getX(), 2) + pow(pt1.getY() - pt2.getY(), 2) + pow(pt1.getZ() - pt2.getZ(), 2));
}


//getter 
Point3D Line3D::getPt1(){
    return pt1;
}

Point3D Line3D::getPt2(){
    return pt2;
}


//setter
void Line3D::setPt1(Point3D pt1){
    this->pt1 = pt1;
    setLength();
}

void Line3D::setPt2(Point3D pt2){
    this->pt2 = pt2;
    setLength();
}

bool Line3D::operator==(const Line3D &l3d) const {
    return (pt1 == l3d.pt1 && pt2 == l3d.pt2);
}