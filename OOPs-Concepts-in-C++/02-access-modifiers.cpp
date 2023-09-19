#include <iostream>

using namespace std;

class Student
{
public: // Public access modifier
    int marks1; // Public member variable

    void mark()
    {
        cout << "Mark: " << marks1 << endl;
    }
};

int main()
{
    Student s1;

    // Set the value of the public member variable 'marks1'
    s1.marks1 = 97;
    s1.mark();
    return 0;
}