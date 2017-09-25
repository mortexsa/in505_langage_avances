#include <iostream>
using namespace std;
#include <cstring>

void table_write(const int table_length, int *table)
{
	int table_counter = 0;
	while(table_counter < table_length)
	{
		table[table_counter] = table_counter;
		table_counter++;
	} 
}

void table_read (const int table_length, const int *table)
{
	int table_counter = 0;
	while(table_counter < table_length)
	{
		cout << table[table_counter] << endl;
		table_counter++;
	}
}

int main()
{
	int table_length = 10;
    int table[table_length];
    table_write(table_length,table);
	table_read(table_length,table);

}

