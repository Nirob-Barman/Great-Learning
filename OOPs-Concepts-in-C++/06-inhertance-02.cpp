#include <iostream>

using namespace std;

class Student
{
public:
    void study()
    {
        cout << "Student is studying" << endl;
    }
};

class Nirob : public Student
{
public:
    void play()
    {
        cout << "Nirob is playing" << endl;
    }
};

int main()
{
    Nirob Obj;

    // Access and call both the "study" and "play" methods on the Nirob object.
    Obj.study(); // Calls the "study" method from the base class (Student)
    Obj.play();  // Calls the "play" method from the derived class (Nirob)
    return 0;
}