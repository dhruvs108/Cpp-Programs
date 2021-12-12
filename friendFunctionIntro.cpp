#include <iostream>
using namespace std;
class B;
class A
{
    private:
        int x;
        friend int sum(A, B);
    public:
        void setNum(int a)
        {
            x = a;
        }
};

class B
{
    private:
        int y;
    public:
        void setNum(int a)
        {
            y = a;
        }
        friend int sum(A, B);
};

int sum(A o1, B o2)
{
    int t = o1.x + o2.y;
    return t;
}

int main()
{
    A num1;
    B num2;
    num1.setNum(1);
    num2.setNum(2);
    int result = sum(num1, num2);
    cout << result;
    return 0;
}
