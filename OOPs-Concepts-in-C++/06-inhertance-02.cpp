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
    Obj.study();
    Obj.play();
    return 0;
}