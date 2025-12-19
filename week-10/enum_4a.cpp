#include <iostream>
using namespace std;

enum DitetEJaves
{
    HENE = 1, // 1
    MARTE,    // 2
    MERKURE,  // 3
    ENJTE,    // 4
    PREMTE,   // 5
    SHTUNE,   // 6
    DIELE     // 7
};

enum Makina
{
    VETURE,
    KAMION,
    AUTOBUS
};

void pershkruajMakinen(Makina m)
{
    if (m == VETURE)
    {
        cout << "Makina eshte veture " << endl;
    }
    else if (m == KAMION)
    {
        cout << "Makina eshte KAMION " << endl;
    }
    else if (m == AUTOBUS)
    {
        cout << "Makina eshte AUTOBUS " << endl;
    }
}

int main()
{
    int val;
    cout << "Vendosni diten e javes (1-7): ";
    cin >> val;

    DitetEJaves dita = (DitetEJaves)val;

    if (dita == HENE)
    {
        cout << "E hene" << endl;
    }

    pershkruajMakinen(AUTOBUS);

    return 0;
}