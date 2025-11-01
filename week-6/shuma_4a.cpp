#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int v1[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Vendose nr " << i + 1 << ":";
        cin >> v1[i];
    }

    int shumaTek = 0;
    int shumaCift = 0;

    for (int i = 0; i < n; i++)
    {
        if (v1[i] % 2 == 1)
        { // tek
            shumaTek += v1[i];
        }
        else
        { // cift
            shumaCift += v1[i];
        }
    }

    cout << "Tek: " << shumaTek << endl;
    cout << "Cift: " << shumaCift << endl;

    return 0;
}