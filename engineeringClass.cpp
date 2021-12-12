#include <iostream>
using namespace std;

class Engineering
{
    private:
        int Java;
        int Sap;
        int Python;
    public:
        void setData(int a);
        void getData(int a);
};

void Engineering :: setData(int a)
{
    switch(a)
    {
        case 0:
            cout << "Enter values for IMB's Java, Sap and Python respectively:\n";
            break;
        case 1:
            cout << "Enter values for TCS's Java, Sap and Python respectively:\n";
            break;
        case 2:
            cout << "Enter values for HCL's Java, Sap and Python respectively:\n";
            break;
    }
    cin >> Java >> Sap >> Python;
}

void Engineering :: getData(int a)
{
    switch(a)
    {
        case 0:
            cout << "IBM Java = " << Java << "\nIMB Sap = " << Sap << "\nIMB Python = " << Python << endl;
            break;
        case 1:
            cout << "TCS Java = " << Java << "\nTCS Sap = " << Sap << "\nTCS Python = " << Python << endl;
            break;
        case 2:
            cout << "HCL Java = " << Java << "\nHCL Sap = " << Sap << "\nHCL Python = " << Python << endl;
    }
}

int main()
{
    Engineering ibm, tcs, hcl;
    ibm.setData(0);
    tcs.setData(1);
    hcl.setData(2);
    ibm.getData(0);
    tcs.getData(1);
    hcl.getData(2);
    return 0;
}
