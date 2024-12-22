#include <stdio.h>
int permutation(int x, int y)
{
    int a = 1, b = 1, result;
    for (int i = 1; i <= x; i++)
    {
        a = a * i;
    }
    for (int i = 1; i <= (x - y); i++)
    {
        b = b * i;
    }
    result = a / b;
    return result;
}
int main()
{
    int n, r, ans;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of r\n");
    scanf("%d", &r);
    ans = permutation(n, r);
    printf("The  permutation  of %d and %d is %d", n, r, ans);
    return 0;
}