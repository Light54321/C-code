#include <stdio.h>
int main()
{
    int n, r,a=1, b=1, c=1, combination;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of r\n");
    scanf("%d", &r);
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        b = b* i;
    }
    for ( int i = 1; i <= r; i++)
    {
        c = c * i ;
    }
    combination = a / (b * c);
    printf("The combination of %d and %d is %d", n, r, combination);

    return 0;
}