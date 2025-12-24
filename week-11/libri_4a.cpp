#include <iostream>
using namespace std;

class Libri
{
    int id;
    int nrFaqeve;

public:
    string emri;
    string autori;

    Libri()
    {
        cout << "U kriju nje liber" << endl;
    }

    Libri(int _id, int _nrFaqeve, string _emri, string _autori)
    {
        id = _id;
        nrFaqeve = _nrFaqeve;
        emri = _emri;
        autori = _autori;
    }

    void setId(int _id)
    {
        id = _id;
    }

    int getId()
    {
        return id;
    }

    void setNrFaqeve(int nrIRiIFaqeve)
    {
        nrFaqeve = nrIRiIFaqeve;
    }

    int getNrFaqeve()
    {
        return nrFaqeve;
    }
};

int main()
{
    Libri l;
    l.autori = "Ismajl Kadare";
    l.emri = "Gjenerali i ushtrise se vdekur";
    l.setId(123124324);
    l.setNrFaqeve(235);

    Libri l2(1234324, 400, "Iliada", "Homeri");

    cout << "Libri 1: " << l.emri << endl;
    cout << "Libri 2: " << l2.emri << endl;

    return 0;
}