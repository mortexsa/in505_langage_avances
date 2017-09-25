#include <iostream>
using namespace std;
#include <cstring>

int main()
{
	char *string_table[3] = {"truc", "machin", "chose"};
	char *tmp_table[3];
	int i=0;
	while(i<3)
	{
		tmp_table[i] = new char[strlen(string_table[i])+1];
		strcpy(tmp_table[i],string_table[i]);
		cout << tmp_table[i] <<endl;
		i++;
	}
	i=0;
	while(i<3)
	{
		delete tmp_table[i];
		i++;
	}

}