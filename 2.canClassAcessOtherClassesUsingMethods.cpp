#include <iostream>
using namespace std;

class Student
{
    public:
        string name = "Dhruv";
        string getName(){
        return name;
        }
        class Student1
        {
            public:
            string MyName;
        };
};

/*class Student1
{
    public:
        string MyName;
};*/
int main()
{
    cout << "To test if a class can modify members of other classes using methods.\n";
    Student Dhruv;
    Dhruv.name = "Dhruv";
    Student1 generic;
    generic.MyName = getName();
    cout << generic.MyName;
    return 0;
}

///Nope, they can't.
