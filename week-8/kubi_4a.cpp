#include <iostream>
using namespace std;

int katrori(int x)
{
    return x * x;
}

int kubi(int x)
{
    return x * x * x;
}

void hello()
{
    cout << "Hi gr 4a";
}

void mbledhDhePrinto(int x, int y, double t)
{
    cout << x + y + t;
}

int main()
{
    int n = 5;
    cout << katrori(n); // Shtyp 25
    cout << kubi(n);    // 125

    cout << kubi(123);
    cout << 123 * 123 * 123;

    return 0;
}