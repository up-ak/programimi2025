#include <iostream>
using namespace std;

int main()
{
    double brinjaA;
    double brinjaB;
    char operatori = '+';
    string teksti = "Vendose brinjen ";

    cout << teksti << "a: ";
    cin >> brinjaA;

    cout << teksti << "b: ";
    cin >> brinjaB;

    cout << "Perimetri: " << 2 * brinjaA + 2 * brinjaB << endl;
    cout << "Siperfaqja: " << brinjaA * brinjaB;

    return 0;
}