#include <iostream>
using namespace std;

class Product
{
    public:
        int a, b;
};
class Item
{
    public:
        int x, y;
        Item()
        {
            x = 0;
            y = 0;
        }
        Item(Product p)
        {
            x = p.a;
            y = p.b;
        }
};
int main()
{
    Product p1;
    p1.a = 1;
    p1.b = 3;
    Item i1;
    i1 = p1;
    cout << i1.x << endl << i1.y;
    return 0;
}
