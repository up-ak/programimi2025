#include <iostream>
using namespace std;

enum Marka
{
    AUDI,
    BMW,
    MERCEDES,
    VOLKSWAGEN,
    TESLA,
    BYD
};

enum NgjyraVetures
{
    KUQE,
    BARDHE,
    HIRI,
    ZEZE
};

struct Vetura
{
    int vitiProdhimit;
    Marka marka;
    NgjyraVetures ngjyra;

    void kontrolloPerOldTimer()
    {
        if (vitiProdhimit < 1995)
        {
            cout << "Makina eshte Old Timer" << endl;
        }
    }
};

int main()
{
    Vetura v = {2019, BMW, KUQE};

    v.kontrolloPerOldTimer();

    Vetura v = {1967, MERCEDES, HIRI};

    v.kontrolloPerOldTimer();

    return 0;
}