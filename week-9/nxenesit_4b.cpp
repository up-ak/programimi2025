#include <iostream>
using namespace std;

int totalNxenes = 0;
int kapacitetiShkolles = 100;

void shfaqTotalin()
{
    cout << "Totali: " << totalNxenes << endl;
}

void shfaqStatistikat()
{
    shfaqTotalin();
    cout << "Vende te lira: " << kapacitetiShkolles - totalNxenes << endl;
}

void shtoNxenes(int numriNxenesve)
{
    if (totalNxenes + numriNxenesve > kapacitetiShkolles)
    {
        cout << "Nuk ka kapacitet" << endl;
        return;
    }

    totalNxenes += numriNxenesve;
}

void largoNxenes(int numriNxenesve)
{
    totalNxenes -= numriNxenesve;
}

int main()
{
    shtoNxenes(5);
    shtoNxenes(96);
    shfaqTotalin();
    largoNxenes(3);

    return 0;
}