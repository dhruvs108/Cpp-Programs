#include <iostream>
using namespace std;

class Student
{   private:
        string name;
        string major;
        char grade;
    public:
        Student(string aName, string aMajor, char aGrade) ///Parameterized Constructor
        {
            name = aName;
            major = aMajor;
            grade = aGrade;
        }
        string hasDistinction()        /// Object/Member/Instance Function
        {
            if(grade == 'A' || grade == 'B')
                return "Distinction: Yes";
            else if(grade == 'C' || grade == 'D' || grade == 'E')
                return "Distinction: No";
            else
                return "Invalid Grade";
        }
        void getStudentData()
        {
            cout << "Name: " << name << endl << "Major: " << major << endl << "Grade: " << grade << endl << hasDistinction() << "\n\n";
        }
};

int main()
{
    cout << "This is a program for testing my ability to create Parameterized Constructor and Member functions in C++!\n";
    Student s1("Dhruv", "Maths", 'A');
    Student s2("Bharat", "General Knowledge", 'E');
    s1.getStudentData();
    s2.getStudentData();
    return 0;
}
