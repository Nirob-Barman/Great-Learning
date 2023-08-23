#include <stdio.h>

int main()
{
    int a = 25;
    int *p;
    p = &a;
    printf("Address of a is %x\n", &a);
    printf("Address of a using pointer variable %x\n", p);
    printf("Value of a using p is %d\n", *p);
    return 0;
}