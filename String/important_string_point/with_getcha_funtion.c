#include <stdio.h>
#include <conio.h>
int main()
{
    char str[10];
    printf("Enter a chR :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &str[i]);
         getchar();
    }
    printf("The 7th chR is %c", str[6]);
    return 0;
}