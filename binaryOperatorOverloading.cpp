#include <iostream>
using namespace std;

class Complex
{
    private:
        int r, i;
    public:
        void setComplex(int a, int b)
        {
            r = a;
            i = b;
        }

        void getComplex()
        {
            cout << endl << r << " + (" << i << "i)";
        }

        Complex operator +(Complex c)
        {
            c.r = r + c.r;
            c.i = i + c.i;
            return  c;
        }

        Complex operator -()
        {
            Complex t;
            t.r = -r;
            t.i = -i;
            return t;
        }

};

int main()
{
    Complex c1, c2, c3;
    c1.setComplex(5, 2);
    c2.setComplex(2, 4);
    c1.getComplex();
    c2.getComplex();
    cout << "\nAfter\n";
    c3 = c1 + c2;
    c1.getComplex();
    c2.getComplex();
    c3.getComplex();
    return 0;
}
