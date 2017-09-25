#include <iostream>
using namespace std;
#include <cstring>

void echange(int &first, int &second)
{
	int tmp = first;
	first = second;
	second = tmp;
}

int main()
{
	int first = 10, second = 20;
	echange(first,second);
	cout << first <<endl;
	cout << second <<endl;
}