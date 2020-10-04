#pragma once
#include "HashFunction.h"
#include <string>
#include <list>
/*class for manipulating a hash table of large strings with names pointing to each one.*/
class HashTable
{
private:
	static const int tableSize = 100;
    const char** table;
	int count;
	/*creates and returns a hash of the key provided*/
	unsigned int hashKey(std::string key);
public:
	HashTable();
	~HashTable();

	/*adds an entry to the hash table. The provided key can be
	  used to find the provided data.*/
	void add(std::string key, std::string data);

	/*returns true if table is empty*/
	bool isEmpty() { return count > 0; };

	/*prints table to console*/
	void print();

	int getCount() { return count; }
};