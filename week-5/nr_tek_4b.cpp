#include <iostream>
using namespace std;

// Printo numrat tek deri në n
// mos i printo numrat prej 10 deri ne 30
// Maksimumi le te jete 301
int main()
{
    int n;
    int numeruesi = 1;
    cout << "Vendosni vleren e n: ";
    cin >> n;

    while (numeruesi <= n)
    {
        if (numeruesi > 301)
        {
            break;
        }

        if (numeruesi >= 10 && numeruesi <= 30)
        {
            numeruesi++;
            continue;
        }

        if (numeruesi % 2 == 1)
        {
            cout << numeruesi << endl;
        }
        // numeruesi += 2;
        numeruesi++;
    }

    return 0;
}