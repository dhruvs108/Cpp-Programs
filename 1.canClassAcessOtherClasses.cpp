#include <iostream>
using namespace std;

class Class1{
    public:
        string name;
};

class Class2{
    public:
        string name2;
//    Dhruv.name = "Dhruv";
};
int main()
{
    cout << "Testing if the members of a public class can be accessed/modified by other classes.\n";
    Class1 Dhruv;
    Class2 student1 = Dhruv.name;
    Dhruv.name = "Dhruv";
    cout << Dhruv.name;
    return 0;
}

///Nope, they can't.
