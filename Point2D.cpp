#include "./header/menu.h"
#include "./header/Point2D.h"


Point2D::Point2D()
{
    x = 0;
    y = 0;
    setDistFrOrign();
}

Point2D::Point2D(int x, int y)
{
    this->x = x;
    this->y = y;
    setDistFrOrign();

}


void Point2D::setDistFrOrign()
{
    distFrOrign = sqrt(pow(x, 2) + pow(y, 2));
}

//getter
int Point2D::getX()
{
    return x;
}

int Point2D::getY()
{
    return y;
}

double Point2D::getScalarValue(){
    return distFrOrign;
}


//setter 
void Point2D::setX(int x){
    this->x = x;
    setDistFrOrign();
}

void Point2D::setY(int y){
    this-> y =y;
    setDistFrOrign();
}

bool Point2D::operator==(const Point2D &p2d) const {
    return (x == p2d.x && y == p2d.y);
}

ostream &operator<<(ostream &os, Point2D &p2d)
{
  os << "[" << std::right << std::setfill(' ')
     << std::setw(4) << p2d.getX() << ","
     << std::setw(4) << p2d.getY() << "]   "
     << std::left << std::setfill(' ')
     << std::fixed << std::setprecision(3) << p2d.getScalarValue() ;
  return os;
}