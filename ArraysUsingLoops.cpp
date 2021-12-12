#include <iostream>

using namespace std;

int main()
{
    int nums[3][2];
    cout << "Enter the elements of the 2D Array: ";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            cin >> nums[i][j];
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
                cout << nums[i][j] << "   ";
            cout << endl;
        }
}
