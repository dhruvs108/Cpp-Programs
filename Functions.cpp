#include <iostream>
#include <math.h>
using namespace std;
void sum(float *x, float *y);
int main()
{
    float a = 2.3, b = 4.2, c;
    sum(&a, &b);
    cout << a;
    return 0;
}

void sum(float *x, float *y)
{
    *x = (*x) + (*y);
}
