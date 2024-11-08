#include <stdio.h>
void main()
{
    char name;

    printf("enter the letter:\n");
    scanf("%c",&name);
    if (name==65||name==97||name==101||name==105||name==111||name==117)
    {
        printf("letter is vowel");
    }
    else if (name>97&&name<=122&&name!=97&&name!=101&&name!=105&&name!=111&&name!=117)
    {
        printf("The letter is not vowel");
    }
    else
    {
        printf("give char is not alphabat");
    }
}