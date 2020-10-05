#pragma once
#include "HashFunction.h"
#include <string>
#include <vector>
/*class for manipulating a hash table of large strings with names pointing to each one.*/
class HashTable
{
	typedef std::vector<std::pair<std::string, std::string>> Bucket;
private:
	static const int tableSize = 100;
	Bucket* table;
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