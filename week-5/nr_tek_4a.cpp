#include <iostream>
using namespace std;

// nr tek deri tek n.
// Max printo deri 501;
// Numrat prej 30 deri ne 40 mos i printo
int main()
{
    int numri = 1;
    int n;
    cout << "Vendos n: ";
    cin >> n;

    while (numri < n)
    {
        if (numri > 30 && numri < 40)
        {
            numri += 1;
            continue;
        }

        if (numri % 2 == 1)
        {
            cout << "Nr: " << numri;
        }

        numri += 1;

        if (numri >= 501)
        {
            break;
        }
    }

    return 0;
}