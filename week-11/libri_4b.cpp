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
        cout << "U krijua nje liber" << endl;
    }

    Libri(int _id, int NrFaqeve, string _emri, string _autori)
    {
        id = _id;
        nrFaqeve = NrFaqeve;
        emri = _emri;
        autori = _autori;
    }

    void setId(int _id)
    {
        id = _id;
    }

    void setNrFaqeve(int _nrFaqeve)
    {
        nrFaqeve = _nrFaqeve;
    }

    int getId()
    {
        return id;
    }

    int getNrFaqeve()
    {
        return nrFaqeve;
    }
};

int main()
{
    Libri l1;

    l1.autori = "Ismail Kadare";
    l1.emri = "Kronike ne gure";
    l1.setId(314324324);
    l1.setNrFaqeve(318);

    cout << l1.getId();

    Libri l2(123234324, 350, "I humburi", "Fatos Kongoli");

    cout << l1.emri << endl;
    cout << l2.emri << endl;

    return 0;
}