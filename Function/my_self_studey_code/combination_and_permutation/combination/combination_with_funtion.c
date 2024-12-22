#include <stdio.h>
int combination(int n, int r)
{
    int a = 1, b = 1, c = 1, result;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    for (int i = 1; i <= (n - r); i++)
    {
        b = b * i;
    }
    for (int i = 1; i <= r; i++)
    {
        c = c * i;
    }
    result = a / (b * c);
    return result;
}
int main()
{
    int n, r, result;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of r\n");
    scanf("%d", &r);
    int combination();
    result = combination(n, r);
    printf("The combination of %d and %d is %d", n, r, result);
    return 0;
}