// function overloading
#include <iostream>

using namespace std;

// The Student class demonstrates function overloading, a form of polymorphism.
class Student
{
public:
    // Overloaded methods with the same name "marks" but different parameter types.

    // Method to display integer marks.
    void marks(int mark)
    {
        cout << "Mark: " << mark << endl;
    }

    // Method to display double marks.
    void marks(double mark)
    {
        cout << "Mark: " << mark << endl;
    }

    // Method with no parameters to indicate "None."
    void marks()
    {
        cout << "None" << endl;
    }
};

int main()
{
    Student Obj;

    // Demonstrate function overloading (polymorphism) by calling methods with different arguments.
    Obj.marks(45);    // Calls the method with an integer argument
    Obj.marks(95.25); // Calls the method with a double argument
    Obj.marks();      // Calls the method with no arguments (displays "None")
    return 0;
}