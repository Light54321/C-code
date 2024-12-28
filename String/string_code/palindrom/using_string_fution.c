#include <stdio.h>
#include <string.h>
int main()
{
    char s_1[100], s_2[100];
    int comper;
    printf("Enter the string s_1:");
    gets(s_1);
    strcpy(s_2, s_1);
    strrev(s_1);
    comper = strcmp(s_1, s_2);
    if (comper == 0)
    {
        printf("The given string  is palandrome");
    }
    else
    {
        printf("The given string is not palandrom");
    }

    return 0;
}
