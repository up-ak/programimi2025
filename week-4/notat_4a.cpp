#include <iostream>
using namespace std;

int main()
{
    int nota;
    cout << "Nota 10-shkallore: ";
    cin >> nota;

    switch (nota)
    {
    case 10:
        cout << "Nota ECTS: A" << endl;
        cout << "Përshkrim: Shkëlqyeshëm" << endl;
        break;
    case 9:
        cout << "Nota ECTS: B" << endl;
        cout << "Përshkrim: Shumë Mirë" << endl;
        break;
    case 8:
        cout << "Nota ECTS: C" << endl;
        cout << "Përshkrim: Mirë" << endl;
        break;
    case 7:
        cout << "Nota ECTS: D" << endl;
        cout << "Përshkrim: Mjaftueshëm" << endl;
        break;
    case 6:
        cout << "Nota ECTS: E" << endl;
        cout << "Përshkrim: Kalueshëm" << endl;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
        cout << "Nota ECTS: F" << endl;
        cout << "Përshkrim: Dështim" << endl;
        break;
    default:
        cout << "Nota gabim";
        break;
    }

    string statusi = nota > 5 ? "KALUAR" : "DESHTUAR";

    cout << "Statusi: " << statusi << endl;

    return 0;
}