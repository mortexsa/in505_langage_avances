#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"

class Segment: public Forme{
    private:
        Point p1;
        Point p2;
    public:
    Segment();
    Segment(const Point& p1,const Point& p2);
    Segment(const Segment& s);
    void afficherForme();
    void deplacerForme();
};

#endif