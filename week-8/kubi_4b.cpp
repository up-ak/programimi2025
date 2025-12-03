#include <iostream>
using namespace std;

int katrori(int nr)
{
    return nr * nr;
}

int kubi(int nr)
{
    int k = nr * nr * nr;

    return k;
}

double mbledh(double a, double b, double c)
{
    return a + b + c;
}

void mbledhDhePrinto(double a, double b, double c)
{
    cout << a + b + c;
}

void hello()
{
    cout << "Hi gr 4b";
}

int main()
{
    int rez = kubi(3);

    cout << rez;

    cout << kubi(8);

    int m = 12;

    cout << kubi(m);

    mbledhDhePrinto(4, 5, 6);

    hello();

    return 0;
}