#include <iostream>
using namespace std;

int numriIPikave = 0;

class Point
{
    int x;
    int y;

public:
    Point()
    {
        numriIPikave++;
        cout << "Konstruktori pa paramtera" << endl;
    }

    Point(int _x, int _y)
    {
        numriIPikave++;
        cout << "Konstruktori me paramtera" << endl;
        x = _x;
        y = _y;
    }

    void setX(int _x)
    {
        cout << "U ndrrrua vlear e x: " << _x << endl;
        x = _x;
    }

    void setY(int _y)
    {
        y = _y;
    }

    void print()
    {
        cout << x << " " << y << endl;
    }

    ~Point()
    {
        cout << "U largu objekti prej memorjes";
        numriIPikave--;
    }
};

int main()
{
    Point pc;

    pc.setX(10);
    pc.setY(4);
    pc.print();

    return 0;
}