#include <iostream>
using namespace std;

class Libri
{
public:
    string titulli;
    int nrKopjeve;
    int nrKopjeveTeHuazuara;

    void huazimi()
    {
        nrKopjeveTeHuazuara++;
        nrKopjeve--;
    }

    double gjendja()
    {
        return (nrKopjeveTeHuazuara / double(nrKopjeveTeHuazuara + nrKopjeve)) * 100;
    }
};

int main()
{
    Libri l;

    l.titulli = "Sikur te isha djale";
    l.nrKopjeve = 300;
    l.nrKopjeveTeHuazuara = 0;

    l.huazimi();
    l.huazimi();
    l.huazimi();

    cout << "Gjendja: " << l.gjendja() << "%" << endl;

    return 0;
}