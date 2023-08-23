#include <iostream>

using namespace std;

class Father
{
public:
    int id = 1;
};

class Son : public Father
{
public:
    int id2 = 2;
};
int main()
{
    Son S1;
    cout << "The Child ID is: " << S1.id2 << endl;
    cout << "The Father ID is: " << S1.id << endl;

    return 0;
}