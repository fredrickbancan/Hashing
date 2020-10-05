#include "HashTable.h"
#include "HashFunction.h"
#include <iostream>
unsigned int HashTable::hashKey(std::string key)
{
	return HashFunction::defaultHash(key.c_str(), key.length()) % tableSize;
}

HashTable::HashTable()
{
	table = new Bucket[tableSize];
	count = 0;
}

HashTable::~HashTable()
{
	delete[] table;
}

void HashTable::add(std::string key, std::string data)
{
	std::cout << "Adding data pair. Key: " + key + ", Data: " + data << std::endl;
	bool overwritten = false;
	int index = hashKey(key);

	/*If the bucket at the provided index already contains data, there must be 
	  a check performed to see if it is the same key, or if its a different key and
	  the provided data needs to be added next to it.*/

	if (table[index].size() > 0)
	{
		Bucket& current = table[index];
		for (Bucket::iterator j = current.begin(); j != current.end(); j++)
		{
			if (j->first == key)//if the bucket contains the same key as provided
			{
				j->second = data;
				overwritten = true;
			}
		}
		
		if (overwritten)
		{
			std::cout << std::endl;
			std::cout << std::string("Hash Collision Warning: The provided key ") + "\"" + key + "\"" + std::string(" has already been added, data at this location will be overwritten!") << std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << std::string("Hash Collision Warning: The generated table index") + std::to_string(index) + std::string(" has already been used, vector at this index will contain multiple sets of data!") << std::endl;
			std::cout << std::endl;
		}
	}

	//if the data was not overwritten then a new entry will be added to that bucket.
	if (!overwritten)
	{
		table[index].push_back(std::pair<std::string, std::string>{key, data});
		count++;
	}
}

void HashTable::print()
{
	std::cout << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < tableSize; i++)
	{
		Bucket current = table[i];
		std::cout << "Bucket " + std::to_string(i) + ": " << std::endl;
		for (Bucket::iterator j = current.begin(); j != current.end(); j++)
		{
			std::cout << "	  Key: " + j->first + ", Data: " + j->second << std::endl;
		}
	}
}
