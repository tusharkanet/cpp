
#include <iostream>
using namespace std;
class batsman{

private:
    int bcode, innings, notout, runs;
    char bname[20];
    float batavg;

    float calcavg()
    {
        return runs / (innings - notout);
    }

public:
       void   readdata()
    {
        cout << "Enter 4 digit code number: " << endl;
        cin >> bcode;
        cout << "Enter Name: " << endl;
        cin >> bname;
        cout << "Enter Innings:  " << endl;
        cin >> innings;
        cout << "Enter NotOuts:  " << endl;
        cin >> notout;
        cout << "Enter Runs:  " << endl;
        cin >> runs;

        batavg = calcavg();
    }

    void displaydata()
    {
        cout << "Code Number: " << bcode << endl;
        cout << "Bat's Man Name: " << bname << endl;
        cout << "Total Innings: " << innings << endl;
        cout << "Total Runs: " << runs << endl;
        cout << "Total NotOuts: " << notout << endl;
        cout << "Bat's Man Average: "<< batavg <<endl;
    }
};

int main()
{
    batsman b;

    b.readdata();
    b.displaydata();
}

