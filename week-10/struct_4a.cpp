#include <iostream>
using namespace std;

struct Student
{
    string emri;
    string id;

    void print()
    {
        cout << "Emri: " << emri << endl;
        cout << "Id: " << id << endl;
    }
};

int main()
{
    Student s1;

    s1.emri = "Leon Hoxha";
    s1.id = "31242343242";

    Student s2 = {"Klea Kuci", "124464563"};

    s1.print();
    s2.print();

    return 0;
}