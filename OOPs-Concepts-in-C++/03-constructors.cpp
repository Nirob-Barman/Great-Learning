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
    Student(string _name, int _id, string _course)
    {
        name = _name;
        id = _id;
        course = _course;
    }
};

int main()
{
    Student s1 = Student("Abul Hasan", 1, "CSE");
    s1.Introduce();
    Student s2 = Student("Babul Hasan", 2, "EEE");
    s2.Introduce();
    Student s3 = Student("Kabul Hasan", 3, "ECEE");
    s3.Introduce();
    return 0;
}