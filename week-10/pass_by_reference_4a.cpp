#include <iostream>
using namespace std;

#define PI 3.14
#define EMRI "Admir"

void testFunc(int &x)
{
    x = 100 * PI;

    cout << "Vlera ne funksionin test: " << x << endl;
}

int main()
{
    int n = 5;

    testFunc(n);

    cout << "Vlera ne main: " << n << endl;

    return 0;
}