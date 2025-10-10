#include <iostream>
using namespace std;

int main()
{
    int dita;
    cout << "Vendose diten e javes (1-7): ";
    cin >> dita;

    switch (dita)
    {
    case 1:
        cout << "E hene" << endl;
        break;
    case 2:
        cout << "E marte" << endl;
        break;
    case 3:
        cout << "E merkure" << endl;
        break;
    case 4:
        cout << "E enjte" << endl;
        break;
    case 5:
        cout << "E premte" << endl;
        break;
    case 6:
        cout << "E shtune" << endl;
        break;
    case 7:
        cout << "E diele" << endl;
        break;
    default:
        cout << "Dita eshte gabim. Vendos prej 1 deri ne 7";
    }

    return 0;
}