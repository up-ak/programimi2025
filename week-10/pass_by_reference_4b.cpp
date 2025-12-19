#include <iostream>
using namespace std;

int pi = 3.14;
#define PI 3.14

void printo(int &a)
{
    a = 5 * PI;

    cout << "Var brenda funksionit: " << a << endl;
}

int main()
{
    int x = 10;

    printo(x);

    cout << "X brenda main: " << x << endl;

    return 0;
}