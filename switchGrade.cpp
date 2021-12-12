#include <iostream>
using namespace std;

int main()
{
    char grade;
    cout << "Enter a grade: ";
    cin >> grade;
    switch(grade)
    {
        case 'A':
            cout << "You did amazing!";
            break;
        case 'B':
            cout << "You did good.";
            break;
        case 'C':
            cout << "You did okay.";
            break;
        case 'D':
            cout << "You did bad.";
            break;
        case 'E':
            cout << "You only passed the test through grace marks.";
            break;
        case 'F':
            cout << "You failed!";
            break;
        default:
            cout << "Invalid Grade";
    }
    return 0;
}
