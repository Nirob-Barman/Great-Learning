#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10];
    char str2[10];
    printf("Enter two strings: ");
    gets(str1);
    gets(str2);
    puts("");
    printf("Length of str1: %d\n", strlen(str1));
    printf("Length of str2: %d\n", strlen(str2));
    printf("UpperCase of str1: %s\n", strupr(str1));
    printf("LowerCase of str2: %s\n", strlwr(str2));
    printf("Concatenation of str1 and str2 is %s\n", strcat(str1, str2));
    char a[10];
    char b[10];
    gets(a);
    printf("String Copies to b to a is: %s\n", strcpy(b, a));
    return 0;
}