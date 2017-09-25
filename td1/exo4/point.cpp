#include <iostream>
using namespace std;
#include <cstring>


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
	
	Point(const Point &p)
	{
		this->x = p.x;
		this->y = p.y;
	}
	void afficher()
	{
		cout <<"x:"<< this->x <<'/'<< "y:"<<this->y << endl;
	}
};

int main()
{
	Point *p = new Point();
	p->afficher();

}