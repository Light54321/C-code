#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the number of row you want:");
    scanf("%d", &a);
    printf("Enter the number of (*) you want in a row:");
    scanf("%d", &b);
    for (int i = 1; i <= a; i++)
    {
        for (int t = a - 1; t >= i; t--)
        {
            printf(" ");
        }
        for (int j = 1; j <= b; j++)
        {

            printf("*");
        }
        printf("\n");
    }
}