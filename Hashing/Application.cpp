#include "HashFunction.h"
#include "HashTable.h"
#include <iostream>
#include <string>

int main()
{
	HashTable table = HashTable();

	table.add("hee", "honk");
	table.print();
	system("PAUSE");
	return 0;
}