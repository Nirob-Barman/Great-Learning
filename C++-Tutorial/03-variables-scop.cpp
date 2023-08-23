#include <iostream>

using namespace std;

int globalVariable = 10; // Global Variable

void print()
{
    int marks = 96; // Local Variable
    cout << marks << endl;
    cout << "Global from print function :" << globalVariable << endl;
    globalVariable = 390;
    cout << "Global from print function :" << globalVariable << endl;
}

int main()
{
    cout << "Global from main function :" << globalVariable << endl;
    globalVariable = 140;
    cout << "Global from main function :" << globalVariable << endl;
    cout << "The Marks is: ";
    print();
    return 0;
}