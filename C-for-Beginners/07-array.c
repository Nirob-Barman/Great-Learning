#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    char s[5] = {'h', 'e', 'l', 'l', 'o'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", s[i]);
    }
    return 0;
}