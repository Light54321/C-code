#include <stdio.h>
#include <string.h>
int main()
{
    char s_1[100], s_2[100];
    int l = 0, cmp;
    // string input
    printf("Enter the string:");
    gets(s_1);
    // string length
    for (int i = 0; s_1[i] != '\0'; i++)
    {
        l = l + 1;
    }
    // strrev
    for (int i = 0; s_1[i] != '\0'; i++)
    {
        s_2[i] = s_1[l - i - 1];
    }
    s_2[l] = '\0';
    // strcmp
    for (int i = 0; s_1[i] != '\0'; i++)
    {
        if (s_1[i] == s_2[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }

    if (cmp = 0)
    {
        printf("String is plandrom");
    }
    else
    {
        printf("String is not plandrom");
    }
    return 0;
}