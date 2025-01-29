#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int factorial = fact(n);
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}