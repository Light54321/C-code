#include <stdio.h>
float area_rectangle (float length, float width)
{
    return length * width;
}
int main()
{
    printf("Enter the length and width of the rectangle: ");
    float length, width;
    scanf("%f %f", &length, &width);
    float area =area_rectangle(length, width);
    printf("The area of the rectangle is: %.2f", area);
    return 0;
}