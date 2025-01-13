#include <stdio.h>
float p = 3.1416;
float area_circle(float radius)
{
    return p * radius * radius;
}
int main()
{
    printf("Enter the radius of circle: ");
    float radius;
    scanf("%f", &radius);
    float area = area_circle(radius);
    printf("The area of the circle is: %.2f", area);
    return 0;
}