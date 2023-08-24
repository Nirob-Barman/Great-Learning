// run time polymorphism
#include <iostream>

using namespace std;

class Student
{
public:
    virtual void introduce()
    {
        cout << "Introducing the Student" << endl;
    }
    void display()
    {
        cout << "Displaying the Student" << endl;
    }
};

class Nirob : public Student
{
    void introduce()
    {
        cout << "Introducing the Nirob" << endl;
    }
    void display()
    {
        cout << "Displaying the Nirob" << endl;
    }
};

int main()
{
    Student *Obj;
    Nirob Object;
    Obj = &Object;
    Obj->introduce();
    Obj->display();
    return 0;
}