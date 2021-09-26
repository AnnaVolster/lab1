#include <iostream> 
#pragma once
class Set
{
private:
	int Power;
	unsigned int* Arr = nullptr;

public:
	Set();

	Set(int _Power);

	Set(const Set& p);
	
	void Intersection(Set const& b);
	void Input();
	void Output();
	void realloc(int new_pow);
	int power() const;
	int& at(size_t index);
	void insert(size_t index, int value);
	~Set();
};

