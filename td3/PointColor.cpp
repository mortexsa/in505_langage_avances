#include "PointColor.h"
using namespace std;


PointColor::PointColor() : Point()
{
    m_couleur = "blanc";
}
PointColor::PointColor(const int x,const int y, const string couleur) : Point(x,y)
{
    m_couleur = couleur;
}
PointColor::PointColor(const PointColor& pc) : Point(pc.x,pc.y)
{
    m_couleur = pc.m_couleur;
}
PointColor::~PointColor()
{
    cout <<"appel au destructeur de point couleur"<<endl;
}
string PointColor::getCouleur() const{
    return m_couleur;
}
void PointColor::afficher() const{
    Point::afficher();
    cout <<"la couleur du point est : "<<m_couleur<<endl;
}
void PointColor::cloner(const Point& pc){
    Point::cloner();
    m_couleur = pc.m_couleur;
}