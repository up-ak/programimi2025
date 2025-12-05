#include <iostream>
using namespace std;

int kombino(int a, int b)
{
    int rez = a + b;

    return rez;
}

string kombino(string a, string b)
{
    string rez = a + " " + b;

    return rez;
}

int main()
{
    cout << kombino("Admir", "Kadriu") << endl;

    cout << kombino(10, 20) << endl;
}