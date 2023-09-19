#include <iostream>

using namespace std;

// The Student class represents a basic student with a marks attribute.
class Student
{
public:
    int marks = 100;
};

// The Nirob class inherits from the Student class, 
// meaning it inherits the "marks" attribute.
class Nirob : public Student
{
public:
    int marksDetected = 5; // Additional attribute specific to Nirob
};

int main()
{
    Nirob Obj;

    // Access and print the marks obtained and marks detected by Nirob.
    cout << "Marks obtainer by Nirob: " << Obj.marks << endl;
    cout << "Marks detected by Nirob: " << Obj.marksDetected << endl;
    return 0;
}