#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    int v[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Vendose antarin " << i + 1;
        cin >> v[i];
    }

    int min = v[0];
    int max = v[0];

    for (int i = 1; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }

        if (v[i] > max)
        {
            max = v[i];
        }
    }

    return 0;
}