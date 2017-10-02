#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>


class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		this->x=0;
		this->y=0;
	}
	
	Point(const int x,const int y)
	{
		this->x = x;
		this->y = y;
	}
	
	Point(const Point& p)
	{
		this->x = p.x;
		this->y = p.y;
	}
	int getpx()
	{
		return this->x;
	}
	int getpy()
	{
		return this->y;
	}
	void afficher()
	{
		cout <<"x:"<< this->x <<'/'<< "y:"<<this->y << endl;
	}
	void cloner(const Point& p)
	{
		this->x = p.x;
		this->y = p.y;
	}
	~Point()
	{
		cout <<"appel au destructeur de point"<<endl;
	}
};

class Segment
{
private:
	Point p1;
	Point p2;
public:
	Segment(){}
	Segment(const Point& p1,const Point& p2): p1(p1), p2(p2){};
	Segment(const Segment& s): p1(s.p1), p2(s.p2){};
	void afficherSegment()
	{
		cout<<"Premier Point : ";
		this->p1.afficher();
		cout<<"Deuxieme Point : ";
		this->p2.afficher();
	}
	double longueur()
	{
		return sqrt(pow(this->p2.getpx()-this->p1.getpx(),2) + pow(this->p2.getpy()-this->p1.getpy(),2));
	}
	bool estVertical()
	{
		if(this->p1.getpx() == this->p2.getpx()) return true;
		else return false;
	}
	bool estHorizontal()
	{
		if(this->p1.getpy() == this->p2.getpy()) return true;
		else return false;
	}
	bool estDiagonal()
	{
		if(p1.getpx() != p2.getpx() && p1.getpy() != p2.getpy()) return true;
		else return false;
	}
	~Segment()
	{
		cout <<"appel au destructeur de segment"<<endl;
	}
};

int main()
{
	Point p(4,3);
	Point p2 = Point(3,3);
	Segment s = Segment(p,p2);
	p.afficher();
	p2.afficher();
	s.afficherSegment();
	cout<<"la longeueur du segment est de : "<<s.longueur()<<endl;
}