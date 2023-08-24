#include <iostream>

using namespace std;

class Student
{
public:
    int marks = 100;
};

class Nirob : public Student
{
public:
    int marksDetected = 5;
};

int main()
{
    Nirob Obj;
    cout << "Marks obtainer by Nirob: " << Obj.marks << endl;
    cout << "Marks detected by Nirob: " << Obj.marksDetected << endl;
    return 0;
}