#include <iostream>
using namespace std;

int main()
{
    int n;
    bool eshteNumerIThjesht = true;
    cout << "Vendosni n: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            eshteNumerIThjesht = false;
            break;
        }
    }

    if (eshteNumerIThjesht)
    {
        cout << "Eshte numer i thjesht" << endl;
    }
    else
    {
        cout << "Nuk eshte numer i thjesht" << endl;
    }

    return 0;
}