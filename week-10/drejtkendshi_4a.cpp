#include <iostream>
using namespace std;

struct Drejtkendesh
{
    double gjatesia;
    double gjeresia;

    double siperfaqja()
    {
        return gjatesia * gjeresia;
    }

    double perimetri()
    {
        return 2 * (gjatesia + gjeresia);
    }

    bool eshteKatror()
    {
        return gjatesia == gjeresia;
    }
};

int main()
{
    Drejtkendesh d = {5.1, 6.0};

    cout << "Perimetri " << d.perimetri() << endl;

    if (d.eshteKatror())
    {
        cout << "Eshte katror" << endl;
    }

    return 0;
}