#include <iostream>
using namespace std;

int main()
{
    double temperatura = -10;

    double abs = -temperatura;

    // "Shkruani një numër: " -> pozitiv -> negativ
    cout << "Vendose temperaturen: ";
    cin >> temperatura;

    if (temperatura > 25)
    {
        cout << "Eshte nxet sot" << endl;
    }
    else if (temperatura < 5)
    {
        cout << "Sot eshte ftohet" << endl;
    }
    else
    {
        cout << "Sot nuk eshte aq nxet" << endl;
    }

    return 0;
}