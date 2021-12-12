#include <iostream>
using namespace std;

class Number
{
    private:
        float x;
    public:
        void setNum(float a)
        {
            x = a;
        }
        void getNum()
        {
            cout << x << endl;
        }
        friend Number operator++(float);
};

Number operator++(float n)
{
    Number t;
    t = ++n.x;
    return t;
}

int main()
{
    Number num1, num2;
    num2.setNum(5);
    num1 = ++num2;
    num1.getNum();
    num2.getNum();
    return 0;
}
