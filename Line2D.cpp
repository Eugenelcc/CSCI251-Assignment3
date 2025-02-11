#include "./header/menu.h"
#include "./header/Line2D.h"
#include "./header/Point2D.h"


Line2D::Line2D(){
    pt1 = Point2D();
    pt2 = Point2D();
    setLength();
}

Line2D::Line2D(Point2D pt1, Point2D pt2 ){
    this->pt1 = pt1;
    this->pt2 =pt2;
    setLength();
}

void Line2D:: setLength(){
    length = sqrt(pow(pt1.getX() - pt2.getX(), 2) + pow(pt1.getY() - pt2.getY(), 2));
}

//getter
Point2D Line2D:: getPt1() const{
    return pt1;
}

Point2D Line2D::getPt2() const {
    return pt2;
}


double Line2D::getScalarValue() const{
    return length;
}

//setter
void Line2D::setPt1(Point2D pt1){
    this->pt1 = pt1;
    setLength();
}

void Line2D::setPt2(Point2D pt2){
    this->pt2 = pt2;
    setLength();
}

bool Line2D::operator==(const Line2D &l2d) const {
    return (pt1 == l2d.pt1 && pt2 == l2d.pt2);
}


ostream &operator<<(ostream &os, const Line2D &L2D){
    os << "[" << std::right << std::setfill(' ')
     << std::setw(4) << L2D.getPt1().getX() << ","
    << std::setw(4) << L2D.getPt1().getY() << "]   ["
    << std::setw(4) << L2D.getPt2().getX() << ","
    << std::setw(4) << L2D.getPt2().getY() << "]   "
    << std::left << std::setfill(' ') << std::fixed << std::setprecision(3) << L2D.getScalarValue() ;
 return os;
}