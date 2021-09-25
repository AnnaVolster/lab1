#include <iostream> 
#pragma once
class Set
{
private:
	int Power;
	unsigned int* Arr;

public:
	Set();

	Set(int _Power);

	Set(const Set& p);
	
    Set Intersection(Set, Set);
	void Input();
	void Output();
	~Set();
};

