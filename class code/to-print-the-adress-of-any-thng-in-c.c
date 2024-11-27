#include <stdio.h>

int main() {
    int a;
    printf("enter the value of a=");
    scanf(" %d",&a);
    /*
    here we use &a in place of a in 9 line to print adress of variable with indentity a. */
     printf("adress of a is=%d",&a);
    return 0;
}