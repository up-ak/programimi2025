#include <iostream>
using namespace std;

struct Student
{
    string emri;
    string mbiemri;
    string id;

    void printo()
    {
        cout << "Emri: " << emri << endl;
        cout << "Mbiemri: " << mbiemri << endl;
        cout << "Id: " << id << endl;
    }
};

int main()
{
    Student s1 = {"Nora", "Kryeziu", "234325435345"};

    s1.printo();

    Student s2 = {"Manuel", "Ndou", "24325434534"};

    s2.printo();

    return 0;
}