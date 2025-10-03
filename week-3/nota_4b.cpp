#include <iostream>
using namespace std;

int main()
{
    int piket;

    cout << "Vendosni piket: ";

    cin >> piket;

    if (piket > 100 || piket < 0)
    {
        cout << "Gabim" << endl;
    }
    else if (piket < 50)
    {
        cout << "Nuk keni kaluar" << endl;
    }
    else if (piket < 60)
    {
        cout << "Nota 6" << endl;
    }
    else if (piket < 70)
    {
        cout << "Nota 7" << endl;
    }
    else if (piket < 80)
    {
        cout << "Nota 8" << endl;
    }
    else if (piket < 90)
    {
        cout << "Nota 9" << endl;
    }
    else
    {
        cout << "Nota 10" << endl;
    }

    return 0;
}