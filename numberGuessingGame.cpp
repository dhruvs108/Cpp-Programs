#include <iostream>
using namespace std;

int main()
{
    int secNum = 5, guess, i = 0;
    cout << "Welcome to the Number Guessing Game!\n\n";

    for(i = 0; guess != secNum && i<3; i++){
        cout << "Enter a number: ";
        cin >> guess;
    }
    if(guess == secNum)
        cout << "\nYou Won!\n";
    else
        cout << "\nYou Lost!\n";

    return 0;
}
