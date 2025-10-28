#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Vendos n: ";
    cin >> n;
    bool nrIThjesht = true;

    for (int numri = 2; numri <= n - 1; numri++)
    {
        if (n % numri == 0)
        {
            cout << "Numeri nuk eshte i thjesht" << endl;
            nrIThjesht = false;
            break; // nale unazen
        }
    }

    if (nrIThjesht)
    {
        cout << "Numri eshte i thjesht" << endl;
    }

    return 0;
}