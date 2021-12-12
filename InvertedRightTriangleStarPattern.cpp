#include <iostream>
using namespace std;

int main()
{
///    int n;                       Only use this code if you want to take input from user how many lines they want to print!
///   cout << "Enter the number of rows of stars: ";
///    cin >> n;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(j <= 5 - i)
                cout << " ";
            else
                cout << i;
        }
        cout << endl;
    }
    return 0;
}
