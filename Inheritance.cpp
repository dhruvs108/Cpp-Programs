#include <iostream>
using namespace std;

class Chef
{
    public:
        void makesChicken(){
            cout << "The chef makes chicken.\n";
        }
        void makesSalad(){
            cout << "The chef makes salad.\n";
        }
        void makesSpecialDish(){
            cout << "The chef makes barbeque ribs!\n";
        }
};

class ItalianChef : public Chef
{
    public:
        void makesPasta(){
            cout << "The chef makes pasta.\n";
        }
        void makesSpecialDish(){
            cout << "The chef makes chicken parms!\n";
        }
};
int main()
{
    cout << "Welcome to the concept of Inheritance of Classes in C++!\n\n";
    Chef chef1;
    ItalianChef iChef;
    iChef.makesChicken();
    chef1.makesSpecialDish();
    iChef.makesSpecialDish();
    iChef.makesPasta();
    return 0;
}
