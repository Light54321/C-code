#include <stdio.h>

void modifyValue(int *x) {
    *x = 100; // This change will affect the original variable
}

int main() {
    int a = 10;
    modifyValue(&a);
    printf("Value of a: %d\n", a); // Output will be 100
    return 0;
}
/*
 Call by Reference:
 When a function is called by reference, the address of the actual argument is passed to the function.
 Inside the function, the address is used to access the actual argument used in the call.
 Changes made to the variable inside the function affect the original variable outside the function
*/