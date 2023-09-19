#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int id;
    string course;
    
    // Constructor with parameters to initialize object's properties
    Student(string _name, int _id, string _course)
    {
        name = _name;
        id = _id;
        course = _course;
    }

    void Introduce()
    {
        cout << "Name of the student is: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    // Create objects of the Student class using the constructor
    Student s1 = Student("Abul Hasan", 1, "CSE");
    s1.Introduce();
    Student s2 = Student("Babul Hasan", 2, "EEE");
    s2.Introduce();
    Student s3 = Student("Kabul Hasan", 3, "ECEE");
    s3.Introduce();
    return 0;
}