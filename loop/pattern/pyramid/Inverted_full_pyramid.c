#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of row you want:");
    scanf("%d", &a);
    for (int i = a; i >= 1; i--)
    {
        for (int t = 0; t < a - i; t++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}