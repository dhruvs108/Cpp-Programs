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
            cout << r << " + (" << i << "i)" << endl;
        }
/*        Complex operator+(Complex n)
        {
            cout << "Member\n";
            Complex t;
            t.r = r + n.r;
            t.i = i + n.i;
            return t;
        } */
        friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex c1, Complex c2)
{
    cout << "Friend\nIf both friend and member function with operator overloading are defined, it produces ambiguity error\n";
    Complex t;
    t.r = c1.r + c2.r;
    t.i = c1.i + c2.i;
    return t;
}

int main()
{
    Complex num1, num2, num3;
    num1.setComplex(2, 5);
    num2.setComplex(3, 4);
    num3 = num1 + num2;
    num3.getComplex();
    return 0;
}
