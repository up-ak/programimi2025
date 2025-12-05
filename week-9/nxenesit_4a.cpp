#include <iostream>
using namespace std;

int totalNxenes = 0;
int kapacitetiShkolles = 200;

void shfaqTotalin()
{
    int m = 0;

    cout << "Totali: " << totalNxenes << endl;
}

void shtoNxenes(int numriNxenesve)
{
    if (totalNxenes + numriNxenesve > kapacitetiShkolles)
    {
        cout << "Eshte kaluar kapaciteti i shkolles" << endl;
        return;
    }

    totalNxenes += numriNxenesve;
}

void largoNxenes(int numriNxenesve)
{
    totalNxenes -= numriNxenesve;
}

void shfaqStatistikat()
{
    shfaqTotalin();
    cout << "Vendet e lira: " << kapacitetiShkolles - totalNxenes << endl;
}

int main()
{
    shfaqStatistikat();
    shtoNxenes(5);
    shtoNxenes(3);
    largoNxenes(3);
    shtoNxenes(195);
    shfaqStatistikat();

    return 0;
}