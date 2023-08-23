#include <bits/stdc++.h>

using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 110 || age < 1)
        cout << "Invalid Input for vaccinationi" << endl;
    else if (age >= 18)
        cout << "Eligible for vaccinationi" << endl;
    else
        cout << "You are not eligible" << endl;
    return 0;
}