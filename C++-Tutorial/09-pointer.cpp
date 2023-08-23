#include <iostream>

using namespace std;

int main()
{
    int x = 6;
    int *p;
    p = &x;
    cout << "The address of variable: " << p << endl;
    cout << *p << endl;
    cout << x << endl;
    cout << &x << endl;
    return 0;
}