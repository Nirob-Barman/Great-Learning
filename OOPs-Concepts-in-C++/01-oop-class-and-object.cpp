#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int id;
    string course;
    void Introduce()
    {
        cout << "Name of the student is: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Nirob Barman";
    s1.id = 1;
    s1.course = "CSE";

    s1.Introduce();
    return 0;
}