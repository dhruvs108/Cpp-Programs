#include <iostream>
using namespace std;

int main()
{
    int n, e = 1;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(j <=  5 - i)
                cout << " ";
            else if(j > 5 - i && )
            {
                for(n = 1; n <= i; n++){
                    cout << "*";
                }
                e++;
            }
        }
        cout << endl;
    }
    return 0;
}
