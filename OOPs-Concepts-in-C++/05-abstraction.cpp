#include <iostream>

using namespace std;

class abstractStudent
{
    virtual void scholarship() = 0;
};

class Student : abstractStudent
{
public:
    string name;
    int marks;
    string course;
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