#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int imag;
    public:
        void setvalue()
        {
            cin >> real;
            cin >> imag;
        }

        void display()
        {
            cout << real << "+" << imag << "i" << endl;
        }

        void mul(Complex c1, Complex c2)
        {
            real = c1.real * c2.real - c1.imag * c2.imag;
            imag = (c1.real * c2.imag) + (c1.imag * c2.real);
        }
};

int main()
{
    Complex c1,c2,c3;
    cout << "Enter real and imaginary part of first complex number respectively: ";
    c1.setvalue();
    cout << "Enter real and imaginary part of second complex number respectively: ";
    c2.setvalue();
    cout << "Multiplication: ";
    c3.mul(c1,c2);
    c3.display();
    return 0;
}
