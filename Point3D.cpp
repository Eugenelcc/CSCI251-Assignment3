#include "Point3D.h"
#include "Point2D.h"


Point3D::Point3D() {
    this->x = 0;
    this->y = 0;
    setDistFrOrign();
}

Point3D::Point3D(int x, int y, int z) : Point2D(x, y)
{
    this->z = z;
    setDistFrOrign();
}

void Point3D::setDistFrOrign()
{
    distFrOrign = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}

//getter
int Point3D::getZ()
{
    return z;
}


//setter
void Point3D::setZ(int z){
    this->z = z;
    setDistFrOrign();
}

bool Point3D::operator==(const Point3D &p3d) const {
    return (x == p3d.x && y == p3d.y);
}


double Point3D::operator-(const Point3D &p2d) const {
    return abs(distFrOrign - p2d.distFrOrign);
}

ostream &operator<<(ostream &os,  Point3D &p3d)
{
  os << "[" << std::right << std::setfill(' ')
     << std::setw(4) << p3d.getX() << ","
     << std::setw(4) << p3d.getY() << ","
     << std::setw(4) << p3d.getZ() << "]   "
     << std::left << std::setfill(' ')
     << std::fixed << std::setprecision(3) << p3d.getScalarValue() ;
  return os;
}