
#include <iostream>
using namespace std;
class TEST
{
private:
    int testcode, noCandidate, center_reqd;
    string description;

    int CALCNTR()
    {
        return (noCandidate / 101);
    }

public:
    void SCHEDULE()
    {
        cout << "Enter Test Code: ";
        cin >> testcode;
        cout << "Enter Description: ";
        cin >> description;
        cout << "Enter Number of candidate: ";
        cin >> noCandidate;

        center_reqd = CALCNTR();
    }

    void DISPTEST()
    {
        cout << "Test Code: " << testcode << endl;
        cout << "Description: " << description << endl;
        cout << "Number of Candidates: " << noCandidate << endl;
        cout << "Center Required: " << center_reqd << endl;
    }
};

int main()
{
    TEST t;

    t.SCHEDULE();
    t.DISPTEST();
}

