#include "Set.h"
#include <iostream>
#define NMAX 100

using namespace std;


Set::Set():Set(0) {}

Set::Set(int _Power)
{
    realloc(_Power);
}


Set::Set(const Set& p) : Set(p.Power) {

    for (int i = 0; i < p.Power; i++)
    {
        Arr[i] = p.Arr[i];
    }
}


Set Set::Intersection(Set const& b)
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
   
    Set obj(n);
    
    for (int i = 0; i < Power; ++i)
        for (int j = 0; j < b.Power; ++j)
        {
            if (Arr[i] == b.Arr[j])
            {
              obj.Arr[i] = Arr[i];
            }
        }

    return obj;

}


void Set::Input()
{
    cout << "Введите размер " << endl;
    cin >> Power;
    realloc(Power);
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


void Set::realloc(int new_pow) {
    if (Arr != nullptr) 
    { 
        delete[] Arr; 
    }
    if (new_pow != 0) 
    { 
        Arr = new unsigned int[new_pow];
    }
    else { 
        Arr = nullptr; 
    }
    Power = new_pow;
}

int Set::power() const {
    return Power;
}

unsigned int& Set::at(size_t index) {

    return Arr[index];

}

void Set::insert(size_t index, int value) {

    Arr[index] = value;
}

Set::~Set()
{
   delete[] Arr;
}



