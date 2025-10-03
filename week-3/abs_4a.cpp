#include <iostream>
using namespace std;

int main()
{
    int numri;
    cout << "Vendse numrin: ";
    cin >> numri;

    if (numri < 0)
    {
        numri = -numri;
    }

    cout << numri;

    return 0;
}