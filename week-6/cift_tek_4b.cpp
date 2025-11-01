#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int v[n];
    int shumaCift = 0;
    int shumaTek = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Vendose antarin " << i + 1;
        cin >> v[i];
    }

    // vargu eshte i mbushur
    // llogaritni shumen e antarve
    // v[i] % 2 == 0 -> cift

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            shumaCift += v[i];
        }
        else
        {
            shumaTek += v[i];
        }
    }

    return 0;
}