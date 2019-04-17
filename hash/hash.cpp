#include <iostream>
#include <string>
using namespace std;

const int TABLE_SIZE = 127;

class HashEntry
{
public:
	string value;
	HashEntry(string value)
	{
		this->value = value;
	}
};


class HashMap
{
private:
	HashEntry **table;
public:
	HashMap()
	{
		table = new HashEntry*[TABLE_SIZE];
		for(int k=0; k < TABLE_SIZE; k++)
		{
			table[k] = NULL;
		}
	}

	//hash function
	int HashFunc(string value)
	{
		int key = 0;
		for(int i=0; i<value.size();i++)
		{
			key += value[i];
		}
		return key % TABLE_SIZE;
	}

	void Insert(string value)
	{
		int hash = HashFunc(value);
		if(table[hash] == NULL)
		{
			table[hash] = new HashEntry(value);
		}
	}

	HashEntry* Search(string value)
	{
		int hash = HashFunc(value);
		if(table[hash] == NULL)
			return NULL;
		else
			return table[hash];
	}

	void Remove(string value)
	{
		int hash = HashFunc(value);
		if(table[hash] == NULL)
		{
			cout<<"没有发现元素"<<value<<endl;
		}
		else
		{
			table[hash] == NULL;
			cout<<"元素值"<<value<<"被删除"<<endl;
		}

	}


};


int main()
{
	HashMap hash;
	hash.Insert("one");
	hash.Insert("two");
	hash.Insert("three");

	cout<<hash.Search("two");
	return 0;
}

