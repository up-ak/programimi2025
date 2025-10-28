#include <iostream>
using namespace std;

// z = Σ(i=1 to n) i + Π(i=1 to n) i
int main()
{
    int count = 1;
    int shuma = 0;
    int prodhimi = 1;

    int n;
    cout << "Vendosni vleren e n: ";
    cin >> n;

    while (count <= n)
    {
        cout << count << endl;
        shuma += count;
        prodhimi *= count;
        count++;
    }

    // for (int count = 1; count <= n; count++)
    // {
    //     // blloku;
    // }

    cout << "Shuma e numrave prej 0 deri ne " << n << " eshte " << shuma << endl;
    cout << "Prodhimi i numrave prej 0 deri ne " << n << " eshte " << prodhimi << endl;
    cout << "z = " << shuma + prodhimi << endl;
    return 0;
}