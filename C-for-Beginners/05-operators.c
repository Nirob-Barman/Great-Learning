#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x = 15, y = 10;
    // Arithmetic operators
    printf("Arithmetic Operations\n");
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("y / x = %d\n", y / x);
    printf("x %% y = %d\n", x % y);
    printf("y %% x = %d\n", y % x);

    // Relational operators
    printf("Relational Operations\n");
    printf("x > y = %d\n", x > y);
    printf("x < y = %d\n", x < y);
    printf("x = y = %d\n", x == y);
    printf("x != y = %d\n", x != y);

    // Logical operators
    printf("Logical Operations\n");
    bool a = true;
    bool b = false;
    printf("a & b = %d\n", a && b);
    printf("a | b = %d\n", a || b);

    // Assignment operators
    printf("Assignment Operations\n");
    int m = 60;
    int n = m;
    printf("m = %d and n = %d\n", m, n);
    return 0;
}