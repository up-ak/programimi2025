#include <iostream>
using namespace std;

int main()
{
    int m[2][5];
    int countPositive = 0;
    int countNegative = 0;
    int countOdd = 0;
    int sum = 0;
    int sumOboveDiagonal = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Vendosni antarin [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << m[i][j] << " ";

            sum += m[i][j];

            if (j > i)
            {
                sumOboveDiagonal += m[i][j];
            }

            if (m[i][j] >= 0)
            {
                countPositive++;
            }
            else
            {
                countNegative++;
            }

            if (m[i][j] % 2 == 1)
            {
                countOdd++;
            }
        }

        cout << endl;
    }

    return 0;
}