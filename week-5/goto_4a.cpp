#include <iostream>
using namespace std;

int main()
{
    int dita;
    int numruesi = 1;
leximi:
    cout << "Vendos diten e javes (1-7): ";
    cin >> dita;

    if (dita > 7 || dita < 1)
    {
        cout << "Dita gabim! Vendose perseri" << endl;
        numruesi++;
        goto leximi;
    }

    cout << "Leximi u perserit " << numruesi << " here";

    return 0;
}