#include <iostream>
using namespace std;
class Get
{
public:
    int n,mlt=1;

    void getN()
    {
        cout << "Enter Number: ";
        cin >> n;
    }
};

class Print : public Get
{
public:
    void printN()
    {
        for (int i = n; i >=1; i--)
        {
           mlt*=n; 
           n--;
        }
        cout<<"Factorial of Number: "<<mlt;
    }
};

int main()
{
    Print a;


    a.getN();
    a.printN();
}  