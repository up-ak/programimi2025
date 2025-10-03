#include <iostream>
using namespace std;

int main()
{
    int temperatura;

    cout << "Vendosni temperaturen: ";
    cin >> temperatura;

    if (temperatura < 20)
    {
        cout << "Sot eshte ftohet";
        cout << endl;
    }
    else
    {
        cout << "Sot eshte nxet" << endl;
    }

    return 0;
}