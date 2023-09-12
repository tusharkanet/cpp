#include <iostream>
using namespace std;
class Base
{
protected:
    int n, i, j;

public:
    void setN()
    {
        cout << "Enter Value of n: ";
        cin >> n;
    }
};

class Table : public Base
{
public:
    void table()
    {
        for (i = 1; i <= 10; i++)
        {

            for (j = 1; j <= 10; j++)
            {
                cout << i << "*" << j << "=" << i * j << endl;
            }
            cout << endl;
        }
    }
};

class Reverse : public Base
{
public:
    void printN()
    {
        for (i = n; i >= 1; i--)
        {
            cout << n << "\t";
            n--;
        }
    }
    
};

int main()
{
    Table t;
    t.table();

    Reverse r;
    r.setN();
    r.printN();
}