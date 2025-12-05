#include <iostream>
using namespace std;

double PI = 3.14;

bool eshteCift(int nr)
{
    return nr % 2 == 0;
}

bool eshteTek(int nr)
{
    int m = 0;
    // DRY
    return !eshteCift(nr);
}

int main()
{
    int n = 4;

    bool cift = eshteCift(n);

    if (cift)
    {
        cout << "Nr eshte cift";
    }

    return 0;
}