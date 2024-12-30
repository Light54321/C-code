#include <stdio.h>

void modifyValue(int x) {
    x = 100; // This change will not affect the original variable
}

int main() {
    int a = 10;
    modifyValue(a);
    printf("Value of a: %d\n", a); // Output will be 10
    return 0;
}
/*
  Call by Value:
  When a function is called by value, the actual value of the argument is passed to the function.
  Inside the function, a new variable is created, and the value of the passed argument is copied into this new variable.
  Changes made to the variable inside the function do not affect the original variable outside the function.
*/