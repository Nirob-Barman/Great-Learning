#include <iostream>

using namespace std;

class Student
{
private:       // Private access modifier for encapsulation
    int marks; // Private member variable to store marks

public:
    // Public member function to set marks
    void setMarks(int _marks)
    {
        marks = _marks; // Set the value of marks
    }

    // Public member function to get marks
    int getMarks()
    {
        return marks; // Return the value of marks
    }
};

int main()
{
    Student obj;

    // Set the marks using the setMarks method
    obj.setMarks(45);

    // Display the marks using the getMarks method
    cout << "Mark: " << obj.getMarks() << endl;
    return 0;
}

// In this code, the marks member variable is declared as private,
// which means it can only be accessed or modified through the public member functions setMarks and getMarks.
// This is an example of encapsulation,
// where the internal state of the class is protected
// and can be controlled through well - defined interfaces
// provided by the public member functions.