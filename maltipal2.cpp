#include <iostream>
using namespace std;
class Get
{
public:
    int m = 1;
};

class GetValue
{
public:
    int n;
    void getN()
    {
        cout << "Enter terms: ";
        cin >> n;
    }
};

class Print : protected Get, protected GetValue
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