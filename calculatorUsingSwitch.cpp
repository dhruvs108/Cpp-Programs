#include <iostream>
using namespace std;

int main()
{
    char op;
    int a, b;
    cout << "Calculator in C++!\n";
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter an operand: ";
    cin >> op;
    switch(op)
    {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            cout << "Result: " << a / b << endl;
            break;
        default:
            cout << "Invalid Operand!" << endl;
    }
    return 0;
}
