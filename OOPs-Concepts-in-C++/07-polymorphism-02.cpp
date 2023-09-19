// run time polymorphism
#include <iostream>

using namespace std;

// Base class
class Student
{
public:
    // Virtual function for introducing a Student
    virtual void introduce()
    {
        cout << "Introducing the Student" << endl;
    }

    // Non-virtual function for displaying a Student
    void display()
    {
        cout << "Displaying the Student" << endl;
    }
};

// Derived class
class Nirob : public Student
{

    // Override the introduce function specific to Nirob
    void introduce()
    {
        cout << "Introducing the Nirob" << endl;
    }

    // Override the display function specific to Nirob
    void display()
    {
        cout << "Displaying the Nirob" << endl;
    }
};

int main()
{
    Student *Obj; // Base class pointer
    Nirob Object; // Derived class object

    Obj = &Object; // Point the base class pointer to the derived class object

    Obj->introduce(); // Calls the introduce() function based on the actual object's type (Nirob)
    Obj->display();   // Calls the display() function based on the pointer's type (Student)

    return 0;
}