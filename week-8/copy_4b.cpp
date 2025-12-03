#include <iostream>
using namespace std;

int main()
{
    int A[2][5] = {
        {2, 5, 8, 3, 10},
        {23, 55, 83, 32, 10}};
    int B[10];
    int k = 0; // Indeksi për vektorin e ri B

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[i][j] % 2 == 1)
            { // Nëse numri është tek
                B[k] = A[i][j];
                k++;
            }
        }
    }

    // Shtypja e B
    for (int i = 0; i < k; i++)
    {
        cout << B[i] << " ";
    }

    return 0;
}