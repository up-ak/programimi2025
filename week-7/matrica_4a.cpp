#include <iostream>
using namespace std;

int main()
{
    int matrica[3][4];
    int shuma = 0;
    int shumaNeDiagonale = 0;
    int countPositive = 0;
    int countNegative = 0;
    int countOdd = 0;
    int prodhimiMbiDiagonale = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Vendose vleren: [" << i + 1 << "][" << j + 1 << "]:";
            cin >> matrica[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrica[i][j] << " ";

            shuma += matrica[i][j];

            if (i == j)
            {
                shumaNeDiagonale += matrica[i][j];
            }

            if (matrica[i][j] >= 0)
            {
                countPositive++;
            }
            else
            {
                countNegative++;
            }

            if (matrica[i][j] % 2 == 1)
            {
                countOdd++;
            }

            if (j > i)
            {
                prodhimiMbiDiagonale *= matrica[i][j];
            }
        }

        cout << endl;
    }

    cout << "Shuma e anterve eshte: " << shuma << endl;
    cout << "Mesatarja eshte: " << shuma / 12.0 << endl;

    return 0;
}