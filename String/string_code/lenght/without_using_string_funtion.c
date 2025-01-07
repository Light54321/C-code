#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int l = 0;
    printf("Enter the string:");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        l = l + 1;
    }
    printf("The lemgth of givem string is :%d", l);
    return 0;
}