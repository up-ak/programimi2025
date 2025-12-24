#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    string emri;

    Point()
    {
        cout << "U krijua nje pike pa paramtera" << endl;
    }

    Point(int _x, int _y)
    {
        cout << "U krijua nje pike me parametra" << endl;
        x = _x;
        y = _y;
    }

    void setX(int _x)
    {
        cout << "U ndryshua X" << endl;
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
        cout << "U largua pika" << endl;
    }
};

int main()
{
    Point p1;

    Point p2(3, 5);

    return 0;
}