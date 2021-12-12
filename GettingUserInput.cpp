#include <iostream>
using namespace std;

int main()
{
    float age, num1, num2;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old.\n";
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Num1: " << num1 << "\nNum2: " << num2 << endl;
    cout << "Addition: " << num1 + num2;
    return 0;
}
