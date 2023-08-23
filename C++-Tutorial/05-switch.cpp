#include <iostream>

using namespace std;

int main()
{
    int age;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are eligible for vaccination" << endl;
        break;
    case 15:
        cout << "You are not eligible for vaccination" << endl;
        break;
    case 110:
        cout << "Not recomended for vaccination" << endl;
        break;

    default:
        cout << "Person" << endl;
        break;
    }
    return 0;
}