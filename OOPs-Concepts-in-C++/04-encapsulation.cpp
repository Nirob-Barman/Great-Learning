#include <iostream>

using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int _marks)
    {
        marks = _marks;
    }
    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student obj;
    obj.setMarks(45);
    cout << "Mark: " << obj.getMarks() << endl;
    return 0;
}