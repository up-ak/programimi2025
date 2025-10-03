#include <iostream>
using namespace std;

int main()
{
    int numri;
    cout << "Shkruani një numër: ";
    cin >> numri;

    if (numri < 0)
    {
        numri = -1 * numri;
    }

    cout << "Numri " << numri;

    return 0;
}