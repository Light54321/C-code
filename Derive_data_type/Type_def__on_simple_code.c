#include <stdio.h>
typedef int a;
int main()
{
    a x, y;
    int g;
    printf("Enter the value of x and y :\n");
    scanf("%d %d", &x, &y);
    g = x + y;
    printf("The sum of x and y is : %d", g);
    return 0;
}