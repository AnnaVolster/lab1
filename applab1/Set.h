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
	
	//void realloc(int new_pow);
	void Intersection(Set const& b);
	void Input();
	void Output();
	~Set();
};

