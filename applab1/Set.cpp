#include "Set.h"
#include <iostream>
#define NMAX 100

using namespace std;


Set::Set():Set(0) {}

Set::Set(int _Power)
{
    if (_Power == 0) {
        Power = _Power;
        Arr == nullptr;
    }
    else {
        Power = _Power;
        Arr = new unsigned int[Power];

        for (int i = 0; i < Power; i++)
        {
            Arr[i] = 0;
        }
    }
}


Set::Set(const Set& p) : Set(p.Power) {

    for (int i = 0; i < p.Power; i++)
    {
        Arr[i] = p.Arr[i];
    }
}


void Set::Intersection(Set const& b)
{ 
    int n = 0;

    for (int i = 0; i < Power; ++i)
        for (int j = 0; j < b.Power; ++j)
        {
            if (Arr[i] == b.Arr[j])
            {
                n++;
            }
        }
   
   Set obj;
   obj.Power = n;
    
    for (int i = 0; i < Power; ++i)
        for (int j = 0; j < b.Power; ++j)
        {
            if (Arr[i] == b.Arr[j])
            {
              obj.Arr[i] = Arr[i];
            }
        }
    obj.Output();
}


void Set::Input()
{
    cout << "Введите размер " << endl;
    cin >> Power;
    Arr = new unsigned int[Power];
    for (int i = 0; i < Power; i++)
    {
        cout << "Введите элемент [" << i + 1 << "]   ";
        cin >> Arr[i];
    }
}



void Set::Output()
{
    for (int i = 0; i < Power; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

/*
void Set::realloc(int new_pow) {
    if () 
    else {
        Arr = new unsigned int[Power];
    }
}
*/


Set::~Set()
{
   delete[] Arr;
}



