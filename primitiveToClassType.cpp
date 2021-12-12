#include <iostream>
using namespace std;

class Complex
{
    private:
        int r, i;
    public:
        Complex(int y)
        {
            r = y;
            i = 0;
        }
        Complex()
        {
            r = 0;
            i = 0;
        }

        void setComplex(int a, int b)
        {
            r = a;
            i = b;
        }
        void getComplex()
        {
            cout << "\nComplex number: " << r << " + (" << i << ")i";
        }
 /*       void operator=(int x)
        {
            r = 1;
            i = 0;
        }
*/
};

int main()
{
    int z = 3;
    Complex c1 = z;
    c1.getComplex();
    return 0;
}
