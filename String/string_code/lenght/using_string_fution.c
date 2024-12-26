#include <stdio.h>
#include <string.h>
int main()
{
char s[100]; int l;
printf("Enter the string:");
gets(s);
l=strlen(s);
printf("The length of given string is:%d",l);
return 0;
}