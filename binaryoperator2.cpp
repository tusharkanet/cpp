#include <iostream>
using namespace std;
class box
{
    int l, b, h;

public:
    void setdata(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    int getdata()
    {
        return l * b * h;
    }
    box operator*(box &n)
    {
        box t;
        t.l = l * n.l;
        t.b = b * n.b;
        t.h = h * n.h;

        return t;
    }
};

int main()
{
    box a, b, c;
    a.setdata(5, 6, 7);
    cout << "volume of box a is:" << a.getdata() << endl;

    b.setdata(8, 9, 2);
    cout << "volume of box b is:" << b.getdata() << endl;

    c = b * a;
    cout << "volume of box c is:" << c.getdata() << endl;
}