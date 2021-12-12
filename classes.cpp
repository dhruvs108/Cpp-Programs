#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int rollNo;
        string DOB;
    public:
        void setData(string aName, int aRollNo, string aDOB)
        {
            name = aName;
            rollNo = aRollNo;
            DOB = aDOB;
        }
        void getData();
};

void Student :: getData()
{
    cout << name << endl << rollNo << endl << DOB << endl;
}
int a = 5;
int main()
{
    int a = 2;
    Student s1;
    s1.setData("Dhruv", 22, "09/03/2002");
    s1.getData();
    cout << endl << ::a;
    return 0;
}
