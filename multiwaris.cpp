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

class pelajar : virtual public orang {
public:
    pelajar(int Pumur) : 
        orang(Pumur)
    {
        cout << "pelajar dibuat\n" << endl;
    }
};

class budi : public pekerja, public pelajar {
public:
    budi(int pUmur) : 
        pekerja(pUmur), 
        pelajar(pUmur), 
        orang(pUmur)
    
    {
        cout << "budi dibuat\n" << endl;
    }
};

int main() {
    budi a(12);
    return 0;
}