#include "Point.h"

using namespace std;

Point::Point() {
    this->x=0;
    this->y=0;
}

Point::Point(const int x,const int y) {
    this->x = x;
    this->y = y;
}

Point::Point(const Point& p) {
    this->x = p.x;
    this->y = p.y;
}
Point::~Point() 
{
    cout <<"appel au destructeur de point"<<endl;
}
int Point::getpx() const{
    return this->x;
}
int Point::getpy() const{
    return this->y;
}
void Point::afficher() const{
    cout <<"x:"<< this->x <<'/'<< "y:"<<this->y << endl;
}
void Point::cloner(const Point& p) {
    this->x = p.x;
    this->y = p.y;
}

