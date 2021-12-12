#include <iostream>
using namespace std;

class Number
{
    private:
        int x;
    public:
        void setNum(int a)
        {
            x = a;
        }

        void getNum()
        {
            cout << "x = " << x << endl;
        }

        Number operator +()
        {
            Number t;
            t.x = x;
            return t;
        }

        Number operator -()
        {
            Number t;
            t.x = -x;
            return t;
        }

};

int main()
{
    Number num1, num2, num3;
    num1.setNum(5);
    num2 = -num1;
    num3 = +num1;
    num1.getNum();
    num2.getNum();
    num3.getNum();
    return 0;
}
