#include <iostream>
using namespace std;

// z = Σ(i=1 to n) i + Π(i=1 to n) i

// shuma = ((((1) + 2) + 3) + 4)
// prodhimi =
int main()
{
    int numri = 1;
    int shuma = 0;
    long int prodhimi = 1;
    int n;
    cout << "Vendos n: ";
    cin >> n;

    while (numri <= n)
    {
        cout << "Numri eshte " << numri << endl;
        shuma += numri;
        prodhimi = prodhimi * numri;
        numri++;
    }

    // nese e bejm unazen me for
    // for (int numri = 1; numri <= n; numri++)
    // {
    // }

    cout << "Shuma eshte " << shuma << endl;
    cout << "Prodhimi eshte " << prodhimi << endl;
    cout << "z = " << shuma + prodhimi << endl;

    return 0;
}