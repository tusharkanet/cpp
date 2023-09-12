
#include <iostream>
using namespace std;
class FUEL
{
private:
    int flinum;
    string destination;
    float distance,fuel;

    int CALFUEL()
    {
        if(distance<=1000)
        {
            return 500;
        }
        else if(distance>1000 && distance<=2000)
        {
            return 1100;
        }
        else
        {
            return 2200;
        }
    }

public:
    void FEEDINFO()
    {
        cout << "Enter fLIGHT Number: ";
        cin >> flinum;
        cout << "Enter Destination: ";
        cin >> destination;
        cout << "Enter Distance: ";
        cin >> distance;

        fuel = CALFUEL();
    }

    void SHOWINFO()
    {
        cout << "Flight Number: " << flinum << endl;
        cout << "Destination: " << destination << endl;
        cout << "Distance: " << distance << " Km" << endl;
        cout << "Fuel Required: " << fuel << " Litres" << endl;
    }
};

int main()
{
    FUEL f;

    f.FEEDINFO();
    f.SHOWINFO();
}

