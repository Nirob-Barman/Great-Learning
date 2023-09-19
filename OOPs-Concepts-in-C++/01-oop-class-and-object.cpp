#include <iostream>

using namespace std;

// Define a class called Student
class Student
{
public:
    string name;   // Member variable to store the student's name
    int id;        // Member variable to store the student's ID
    string course; // Member variable to store the student's course

    // Member function to introduce the student
    void Introduce()
    {
        cout << "Name of the student is: " << name << endl;
        cout << "Id: " << id << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    // Create an object of the Student class
    Student s1;

    // Set the attributes (name, id, course) of the Student Class using the object
    s1.name = "Nirob Barman";
    s1.id = 1;
    s1.course = "CSE";

    // Call the Introduce() method of the student object to introduce the student
    s1.Introduce();
    return 0;
}