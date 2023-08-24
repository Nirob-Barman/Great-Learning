// function overloading
#include <iostream>

using namespace std;

class Student
{
public:
    void marks(int mark)
    {
        cout << "Mark: " << mark << endl;
    }
    void marks(double mark)
    {
        cout << "Mark: " << mark << endl;
    }
    void marks()
    {
        cout << "None" << endl;
    }
};

int main()
{
    Student Obj;
    Obj.marks(45);
    Obj.marks(95.25);
    Obj.marks();
    return 0;
}