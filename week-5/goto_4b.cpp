#include <iostream>
using namespace std;

// Dita duhet te jete prej 1 deri ne 7. Perseritini lexmin per ndryshe
// Printoni sa here eshte perseritur leximi
int main()
{
    int dita;
    int perseritja = 0;
caktoditen:
    cout << "Vendose diten e javes (1-7): ";
    cin >> dita;

    if (dita > 7 || dita < 1)
    {
        cout << "Dita gabim" << endl;
        perseritja++;
        goto caktoditen;
        return 0;
    }

    cout << "Perseritjet: " << perseritja << endl;

    return 0;
}