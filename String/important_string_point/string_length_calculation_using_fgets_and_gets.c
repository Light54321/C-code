#include <stdio.h>
#include <string.h>
int main()
{
    char fgetsExample[100];
    int len;
    printf("Enter a string to get length using fgets funtion:");
    // when you use fgets() to read a string in C, the length of the
    // string calculated by functions like strlen() will include the newline character ('\n') if it is present.
    // This is because fgets() reads the newline character as part of the input and includes it in the string
    // unless the input exceeds the buffer size
    fgets(fgetsExample, sizeof(fgetsExample), stdin);
    len = strlen(fgetsExample);
    printf("length using fgets funtion %d\n", len);
    char getsExample[100];
    printf("Enter a string to get length using gets funtion:");
    // When you use gets() to input a string in C, the newline character ('\n') is not included in the string.
    // This is one of the main differences between gets() and fgets().

    // Using gets():
    // !>  gets() reads a line of input from the standard input (usually the keyboard) and stores it in a string
    //     until a newline character or end-of-file (EOF) is encountered.
    // !>  The newline character ('\n') that you type when pressing "Enter" is not included in the string.
    //     Instead, it is replaced by the null terminator ('\0').
    gets(getsExample);
    len = strlen(getsExample);
    printf("length using gets funtion %d\n", len);
    return 0;
}