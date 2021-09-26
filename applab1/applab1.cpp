#include "Set.h"
#include <cassert>
#include <iostream>
#include <vld.h>

using namespace std;

void test(){
	Set test_set(5);
	assert(test_set.power() == 5);
	test_set.insert(0, 2);
	test_set.insert(1, 1);
	test_set.insert(2, 0);
	test_set.insert(3, 5);
	test_set.insert(4, 6);
	assert(test_set.at(0) == 2);
	assert(test_set.at(1) == 1);
	assert(test_set.at(2) == 0);
	assert(test_set.at(3) == 5);
	assert(test_set.at(4) == 6);

	Set test_set2(3);
	test_set2.insert(0, 2);
	test_set2.insert(1, 7);
	test_set2.insert(2, 0);

	Set inter = test_set.Intersection(test_set2);

	assert(inter.power() == 2);
	assert(inter.at(0) == 2);
	assert(inter.at(1) == 0);
}

int main()
{

	int Power;
	cout << "Enter power a:" << endl;
	cin >> Power;
	Set a(Power);

	for (int i = 0; i <a.power(); i++)
	{
		cout << "Enter element [" << i + 1 << "]   ";
		unsigned int value;
		cin >> value;
		a.insert(i, value);
	}

	cout << "Enter power b:" << endl;
	cin >> Power;
	Set b(Power);

	for (int i = 0; i < b.power(); i++)
	{
		cout << "Enter element [" << i + 1 << "]   ";
		unsigned int value;
		cin >> value;
		b.insert(i, value);
	}
		


	Set c;
	cout << "intersection: " << endl;
	c = a.Intersection(b);
	for (int i = 0; i < c.power(); ++i) {
		cout << c.at(i) << endl;
	}
	

	return 0;
	system("Pause");
}
