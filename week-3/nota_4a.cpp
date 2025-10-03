#include <iostream>
using namespace std;

int main()
{
    int piket;
    cout << "Vendosni piket: ";
    cin >> piket;

    if (piket < 0)
    {
        cout << "Gabim: piket jane me pak se 0" << endl;
    }
    else if (piket < 50)
    {
        cout << "Nuk keni kaluar" << endl;
    }
    else if (piket < 60)
    {
        cout << "Nota eshte 6" << endl;
    }
    else if (piket < 70)
    {
        cout << "Nota eshte 7" << endl;
    }
    else if (piket < 80)
    {
        cout << "Nota eshte 8" << endl;
    }
    else if (piket < 90)
    {
        cout << "Nota eshte 9" << endl;
    }
    else if (piket <= 100)
    {
        cout << "Nota eshte 10" << endl;
    }
    else
    {
        cout << "Gabim: Piket jane me shume 100" << endl;
    }

    return 0;
}