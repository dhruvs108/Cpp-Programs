#include <iostream>
float exponent(float, float);
using namespace std;

float exponent(float a, float b)
{
    float result = 1.0;
    if(b > 0)
        for(float i = 0; i < b; i++)
            result = result * a;
    else if(b == 0)
        return 1;
    else
    {
        b = (-1) * b;
        for(float i = 0; i < b; i++)
            result = result * (1/a);
    }
    return result;
}
int main()
{
    float num, pow;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter it's exponent: ";
    cin >> pow;
    cout << "Result: " << exponent(num, pow);
    return 0;
}
