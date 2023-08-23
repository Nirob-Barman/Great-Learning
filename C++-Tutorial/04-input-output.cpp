#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter number a: ";
    cin >> a;
    cout << "Enter number b: ";
    cin >> b;

    cout << endl;
    cout << "The addition of a and b is: " << a + b << endl;
    cout << "The subtraction of a and b is: " << a - b << endl;

    cout << "Data Types" << endl;
    short s = 2;
    int i = 20;
    long l = 20000;
    long long ll = 200000;
    float f = 3.1;
    double d = 3.14;
    long double ld = 3.14159;
    cout << s << endl;
    cout << i << endl;
    cout << l << endl;
    cout << ll << endl;
    cout << f << endl;
    cout << d << endl;
    cout << ld << endl;
    return 0;
}