#include <iostream>
using namespace std;

int main()
{
    const int madhsia = 4;
    int piket[madhsia] = {90, 80, 70, 81};
    int shuma = 0;

    for (int i = 0; i < madhsia; i++)
    {
        cout << piket[i] << " ";
        shuma += piket[i];
    }

    cout << endl;
    cout << "Shuma e pikeve eshte: " << shuma << endl;

    double mesatarja = (double)shuma / (madhsia + 0.0); // mjafton (double) ose +0.0

    cout << "Mesatarja e pikeve eshte: " << mesatarja << endl;

    return 0;
}