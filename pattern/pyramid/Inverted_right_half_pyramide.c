#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of row you want:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}