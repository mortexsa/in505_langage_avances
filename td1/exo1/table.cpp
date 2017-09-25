
#include <iostream>
using namespace std;
#include <cstring>

int main()
{
	int tab[10];
	int *p = tab;
	int i=0;
	while(i<10)
	{
		cout << p++ <<endl;
		i++;
	}
}