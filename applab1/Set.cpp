#include "Set.h"
#include <iostream>
#define NMAX 100

using namespace std;


Set::Set():Set(0) {}

Set::Set(int _Power)
{ 
    if (_Power == 0) Arr = nullptr; 
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


Set Set::Intersection(Set a, Set b)
{ 
    int i, j, n = 0;

    for (i = 0; i < a.Power; i++)
        for (j = 0; j < b.Power; j++)
        {
            if (a.Arr[i] == b.Arr[j])
            {
                n++;
            }
        }
   
   Set obj;
   obj.Power = n;
    
    for (i = 0; i < a.Power; i++)
        for (j = 0; j < b.Power; j++)
        {
            if (a.Arr[i] == b.Arr[j])
            {
              obj.Arr[i] = a.Arr[i];
            }
        }

    return obj;
}


void Set::Input()
{
    cout << "Ââåäèòå ðàçìåð " << endl;
    cin >> Power;
    Arr = new unsigned int[Power];
    for (int i = 0; i < Power; i++)
    {
        cout << "Ââåäèòå ýëåìåíò [" << i + 1 << "]   ";
        cin >> Arr[i];
    }
}

void Set::Output()
{
    for (int i = 0; i < Power; i++)
        cout << Arr[i] << " ";
    cout << endl;
}


Set::~Set()
{
   delete[] Arr;
}



