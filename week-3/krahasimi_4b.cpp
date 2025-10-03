#include <iostream>
using namespace std;

int main()
{
    int numri1;
    int numri2;

    cout << "Vendosni numrin 1: ";
    cin >> numri1;

    cout << "Vendosni numrin 2: ";
    cin >> numri2;

    if (numri1 > numri2)
    {
        cout << numri1 << " me i madh se " << numri2 << endl;
    }
    else if (numri1 < numri2)
    {
        cout << numri1 << " me i vogel se " << numri2 << endl;
    }
    else
    {
        cout << numri1 << " eshte e barabarte me " << numri2 << endl;
    }

    return 0;
}