#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    switch (n)
    {
    case 1:
        printf("Case 1\n");
        break;
    case 2:
        printf("Case 2\n");
        break;
    default:
        printf("No Case is matching");
        break;
    }
    return 0;
}