#include <iostream>
using namespace std;

class orang {
public:
    int umur;
    orang(int Pumur) : 
         umur(Pumur) 
    {
        cout << "orang dibuat dengan umur " << umur << "\n" << endl;
    }
};

class pekerja : virtual public orang {
public:
    pekerja(int Pumur) : 
        orang(Pumur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};

