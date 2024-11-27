#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the side of triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c && c == a)
    {
        printf("The triangle is equlaterial");
    }
    else if (a == b || b == c || c == a)
    {
        printf("The triangle is isoceles");
    }
    else
    {
        printf("The triangle is scaler");
    }
}