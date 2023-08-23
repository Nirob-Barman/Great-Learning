#include <iostream>

using namespace std;

int main()
{
    cout << "For Loop" << endl;
    for (int i = 0; i < 5; i++)
        cout << "The value of i is: " << i << endl;

    cout << "While Loop" << endl;
    int x = 0;
    while (x < 20)
    {
        x = x + 5;
        cout << "Value of x is: " << x << endl;
    }
    return 0;
}