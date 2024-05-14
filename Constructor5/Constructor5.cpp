#include <iostream>
using namespace std;

class angka
{
private:
    int* arr;
    int panjang;

public:
    angka(int);     // Constructor
    ~angka();       // Destructor
    void cetakData();
    void isiData();
};



int main()
{
    angka belajarcpp(3);                    // Constructor Dipanggil
    angka* ptrBelajarcpp = new angka(5);    // Constructor Dipanggil
    delete ptrBelajarcpp;                   // Destructor Dipanggil

    return 0;
} // Destructor Dipanggil
