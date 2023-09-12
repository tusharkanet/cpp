#include <iostream>
using namespace std;
class Get
{
public:
    int n, m = 1;
};

class GetValue : protected Get
{
public:
    void getN()
    {
        cout << "Enter terms: ";
        cin >> n;
    }
};

class Print : protected GetValue
{
public:
    void printN()
    {
        GetValue::getN();
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

    a.printN();
}