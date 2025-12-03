#include <iostream>
using namespace std;

// krioni funksionin faktorieli
long faktorieli(int n)
{
    long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;
}

int main()
{
    // printo faktorielin e 10;

    cout << faktorieli(10);

    return 0;
}