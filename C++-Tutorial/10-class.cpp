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
};

int main()
{
    Student Obj;
    Obj.name = "Nirob";
    Obj.id = 99;
    // cout << "The name of the student is: " << Obj.name << " and ID is: " << Obj.id << endl;
    Obj.Display();
    return 0;
}