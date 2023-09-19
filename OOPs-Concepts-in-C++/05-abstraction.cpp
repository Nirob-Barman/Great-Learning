#include <iostream>

using namespace std;

// Declare an abstract class called abstractStudent
class abstractStudent
{
    // Declare a pure virtual function called scholarship
    virtual void scholarship() = 0;
};

// Define a class called Student that inherits from abstractStudent
class Student : abstractStudent
{
public:
    string name;
    int marks;
    string course;
    
    // Implement the scholarship function as required by the abstract base class
    void scholarship()
    {
        if (marks > 70)
            cout << "Scholarship has been given to " << name << endl;
        else
            cout << "Deny" << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Nirob Barman";
    s1.marks = 80;
    s1.scholarship();
    return 0;
}