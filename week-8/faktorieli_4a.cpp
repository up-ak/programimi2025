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
    int n = 6;
    long shuma = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            shuma += faktorieli(i);
        }
    }

    cout << "Shuma " << shuma;

    return 0;
}