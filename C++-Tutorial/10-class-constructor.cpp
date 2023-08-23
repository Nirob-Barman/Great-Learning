#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int id;
    void Display()
    {
        cout << "The name of the student is: " << name << " and ID is: " << id << endl;
    }
    Student(string _name, int _id)
    {
        name = _name;
        id = _id;
    }
};

int main()
{
    Student Obj = Student("Abul", 1);
    Obj.Display();
    Student Obj2 = Student("Babul", 2);
    Obj2.Display();
    Student Obj3 = Student("Cabul", 3);
    Obj3.Display();
    return 0;
}