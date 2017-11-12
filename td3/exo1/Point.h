#ifndef POINT_H
#define POINT_H

#include <cstring>
#include <cmath>
#include <iostream>

class Point
{
	protected:
		int x;
		int y;
	public:
		Point();
		Point(const int x,const int y);
		Point(const Point& p);
		~Point();
		int getpx() const;
		int getpy() const;
		virtual void afficher() const;
		virtual void cloner(const Point& p);
	
};



#endif 
