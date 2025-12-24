#include <iostream>
using namespace std;

class Treni
{
public:
    string emri;
    double distancaMasksimale;
    double distancaEKaluar = 0;

    void perditesoDistancen(int nrKilometrave)
    {
        if (distancaEKaluar + nrKilometrave > distancaMasksimale)
        {
            cout << "Treni nuk ka kapacitet të kaloj distancën e pranuar" << endl;
        }
        else
        {
            distancaEKaluar += nrKilometrave;
        }
    }

    double kapacitetiMbetur()
    {
        return (distancaMasksimale - distancaEKaluar) / distancaMasksimale * 100;
    }
};

int main()
{
    Treni t;

    t.emri = "Trankos";
    t.distancaMasksimale = 500;

    t.perditesoDistancen(490);
    t.perditesoDistancen(20);

    cout << "Kapaciteti i mbetur: " << t.kapacitetiMbetur() << endl;

    return 0;
}