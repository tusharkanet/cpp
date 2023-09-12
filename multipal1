#include <iostream>
using namespace std;
class Get
{
public:
    int n;

    void getN()
    {
        cout << "Enter Number: ";
        cin >> n;
    }
};

class Calculate
{
public:
    int mlt = 1;
    void printN(int n)
    {
        for (int i = n; i >= 1; i--)
        {
            mlt *= n;
            n--;
        }
    }
};

class Print : protected Get, protected Calculate
{
public:
    void printAns()
    {
        Get ::getN();
        Calculate ::printN(n);
        cout << "Factorial of Number: " << mlt;
    }
};

int main()
{
    Print a;

    a.printAns();
}