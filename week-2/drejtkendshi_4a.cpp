#include <iostream>
using namespace std;

int main()
{
    double brinjaA;
    double brinjaB;

    cout << "Vendose vleren e brinjes A: ";
    cin >> brinjaA;

    cout << "Vendose vleren e brines B: ";
    cin >> brinjaB;

    cout << "Perimetri eshte: ";
    cout << 2 * brinjaA + 2 * brinjaB;
    cout << endl;

    cout << "Siperfaqja eshte: ";
    cout << brinjaA * brinjaB;

    return 0;
}