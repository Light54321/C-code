#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number of row you want:");
    scanf("%d", &a);
    printf("Enter the number of star you want in one row:");
    scanf("%d", &b);
    for (int i = 1; i <= a; i++)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("*");
        }
        printf("\n");
    }
}