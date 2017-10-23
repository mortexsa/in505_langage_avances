#ifndef POINTCOLOR_H
#define POINTCOLOR_H

#include "Point.h"
#include <iostream>
#include <string>

class PointColor : public Point 
{
    protected:
        std::string m_couleur;
    public:
        PointColor();
        PointColor(const int x,const int y, const std::string couleur);
        PointColor(const PointColor& pc);
        ~PointColor();
        std::string getCouleur() const;
        void afficher() const;
        void cloner(const Point& pc);

};

#endif