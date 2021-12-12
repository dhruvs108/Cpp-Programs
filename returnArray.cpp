#include <iostream>
using namespace std;

int* functionArray(int Array[]){
    Array[0] = 1;
    Array[1] = 2;
    Array[2] = 3;
    Array[3] = 4;
    Array[4] = 5;
    return Array;
}

int main()
{
    int nums[5], *returnedNums;
    returnedNums = functionArray(nums);
    cout << returnedNums[2];
    return 0;
}
