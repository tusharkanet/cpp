#include <iostream>
using namespace std;
class Get
{
public:
    int n, m = 1;

    void getN()
    {
        cout << "Enter terms: ";
        cin >> n;
    }
};

class Print : public Get
{
public:
    void printN()
    {
        for (int i = 1; i <= n; i++)
        {
            cout << m * m << "\t";
            m++;
        }
    }
};

int main()
{
    Print a;

    a.getN();
    a.printN();
}