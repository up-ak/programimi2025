#include <iostream>
using namespace std;

int main()
{
    int dita;
    int numruesi = 1;

    do
    {
        cout << "Vendos diten e javes (1-7): ";
        cin >> dita;
    } while (dita > 7 || dita < 1);

    return 0;
}