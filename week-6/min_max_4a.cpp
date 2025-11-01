#include <iostream>
using namespace std;

int main()
{
    const int n = 7;

    int v[n] = {10, 9, 8, 7, 6, 9, 10};

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

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}