#include <iostream>

using namespace std;

class Student
{
public:
    int marks1;
    void mark()
    {
        cout << "Mark: " << marks1 << endl;
    }
};

int main()
{
    Student s1;
    s1.marks1 = 97;
    s1.mark();
    return 0;
}