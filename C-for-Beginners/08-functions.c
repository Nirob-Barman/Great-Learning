#include <stdio.h>

int mul(int a, int b) // user defined function
{
    return a * b;
}

int add(int a, int b)
{
    return a + b;
}

void sub(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}

int main()
{
    printf("Sum is %d\n", add(10, 15));
    printf("Product is %d\n", mul(5, 10));
    sub(10, 5);
    return 0;
}