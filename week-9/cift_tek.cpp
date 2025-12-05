#include <iostream>
using namespace std;

// eshteCift -> true/false
// eshteTek -> true/false

bool eshteCift(int nr)
{
    return nr % 2 == 0;
}

bool eshteTek(int nr)
{
    // DRY
    return !eshteCift(nr);
}

int main()
{

    return 0;
}