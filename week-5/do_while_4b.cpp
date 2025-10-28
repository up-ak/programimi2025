#include <iostream>
using namespace std;

int main()
{
    int dita = -1;

    do
    {
        cout << "Vendosni diten e javes (1-7): ";
        cin >> dita;
    } while (dita < 1 || dita > 7);

    //  1 < dita < 7 - GABIM
    // dita > 1 && dita < 7

    return 0;
}