#include <stdio.h>

struct student
{
    int rollNo;
    char name[20];
    float cgpa;
};

int main()
{
    struct student Nirob;
    printf("Enter roll No, name, CGPA\n");
    scanf("%d%s%f", &Nirob.rollNo, &Nirob.name, &Nirob.cgpa);
    printf("Roll No: %d\nName: %s\nCGPA: %0.2f\n", Nirob.rollNo, Nirob.name, Nirob.cgpa);

    return 0;
}