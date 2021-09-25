#include "Set.h"
#include <iostream>
#include <vld.h>

using namespace std;

int main()
{

	setlocale(0, "");

	Set a;
	cout << "Множество А: " << endl;
	a.Input();
	a.Output();

	Set b;
	cout << "Множество B: " << endl;
	b.Input();
	b.Output();

	
	Set c;
	c = c.Intersection(a, b);
	cout << "Пересечение множеств" << endl;
	c.Output();
	

	return 0;
	system("Pause");
}