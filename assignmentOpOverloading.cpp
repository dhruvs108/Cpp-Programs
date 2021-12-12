#include <iostream>
using namespace std;

class Complex
{
    private:
        int r, i;
    public:
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
            cout << "Complex number: " << r << " + (" << i << ")i\n";
        }
        void operator=(int x)
        {
            r = 1;
            i = 0;
        }

};

int main()
{
    int z = 3;
    Complex c1, c2;
    c1.setComplex(3, 4);
    c1.getComplex();
    c2 = c1;
    c2.getComplex();
    return 0;
}
