#include <iostream>

using namespace std;

int main()
{
    // 1-D Array
    int a[5] = {5, 6, 9, 21, 78};
    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;

    // 2-D Array
    int b[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}