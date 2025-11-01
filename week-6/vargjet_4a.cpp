#include <iostream>
using namespace std;

int main()
{
    const int nrStudenteve = 7;

    int notat[nrStudenteve] = {10, 9, 8, 7, 6, 9, 10};

    int shumaENotave = 0;

    for (int i = 0; i < nrStudenteve; i++)
    {
        cout << "Nota e studentit " << i + 1 << ": " << notat[i] << endl;
        shumaENotave += notat[i];
    }

    double mesatarja = (double)shumaENotave / nrStudenteve;

    cout << "Mesatarja: " << mesatarja;

    return 0;
}