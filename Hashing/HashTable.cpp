#include "HashTable.h"
#include "HashFunction.h"
#include <iostream>
unsigned int HashTable::hashKey(std::string key)
{
	return HashFunction::defaultHash(key.c_str(), key.length()) % tableSize;
}

HashTable::HashTable()
{
	table = new const char*[tableSize];
	for (int i = 0; i < tableSize; i++)
	{
		table[i] = nullptr;
	}
	count = 0;
}

HashTable::~HashTable()
{/*
	for (int i = 0; i < tableSize; i++)
	{
		if(table[i] != nullptr)
		delete[] table[i];
	}*/

	delete[] table;
}

void HashTable::add(std::string key, std::string data)
{
	char* ptr = new char[data.length() + 1];
	memcpy(ptr, data.data(), data.size());
	ptr[data.length()] = '\0';

	int index = hashKey(key);

	if (table[index] != nullptr)
	{
		delete table[index];
	}
	table[index] = ptr;
	count++;
}

void HashTable::print()
{
	for (int i = 0; i < tableSize; i++)
	{
		if(table[i] != nullptr)
		std::cout << table[i] << std::endl;
	}
}
