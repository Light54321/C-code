#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of row you want:");
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        for (int i = 1; i <= (a + 1) / 2; i++)
        {

            for (int t = 1; t <= (a + 1 - (2 * i)) / 2; t++)
            {
                printf(" ");
            }
            for (int j = 0; j < (2 * i) - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = 1; i <= (a - 1) / 2; i++)
        {
            for (int t = 1; t <= i; t++)
            {
                printf(" ");
            }
            for (int j = 1; j <= a - (2 * i); j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
}