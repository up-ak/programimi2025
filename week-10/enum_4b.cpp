#include <iostream>
using namespace std;

enum Makina
{
    VETURE = 3,
    KAMION, // 4
    AUTOBUS // 5
};

void pershkruajMakinen(Makina m)
{
    if (m == VETURE)
    {
        cout << "Makina eshte veture" << endl;
    }
    else if (m == KAMION)
    {
        cout << "Makina eshte KAMION" << endl;
    }
    else if (m == AUTOBUS)
    {
        cout << "Makina eshte AUTOBUS" << endl;
    }
}

int main()
{

    return 0;
}