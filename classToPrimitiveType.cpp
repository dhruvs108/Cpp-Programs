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
            cout << "Complex number: " << r << " + (" << i << ")i\n";
        }

        operator int()
        {
            return r;
        }
};

int main()
{
    int x;
    Complex c1;
    c1.setComplex(2,3);
    c1.getComplex();
    x = c1;
    cout << x;
    return 0;
}
