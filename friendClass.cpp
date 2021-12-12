#include <iostream>
using namespace std;
class v;
class box
{
    private: int num;
    public: friend class v;
            box(int n)
            {
                num = n;
            }
};

class v
{
    public: void disp(box &b)
            {
                cout << b.num;
            }
};

int main()
{
    v obj;
    box b(5);
    obj.disp(b);
    return 0;
}
