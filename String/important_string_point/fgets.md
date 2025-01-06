fgets() Function:
The fgets() function is used to read a string from a file or standard input, up to a specified number of characters or until a newline character is encountered.

Syntax:
c
char *fgets(char *str, int n, FILE *stream);
str: A pointer to an array where the read string will be stored.

n: The maximum number of characters to read (including the null terminator).

stream: The input stream to read from (stdin for standard input, or a file pointer).

Example of Using fgets:
Here's an example of how to use fgets to read a line of input from the user:

c
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[100]; // Array to store the input string

    printf("Enter a string: ");
    fgets(buffer, sizeof(buffer), stdin); // Read a line of input

    // Remove the newline character if it is present
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }

    printf("You entered: %s\n", buffer);

    return 0;
}
Explanation:
Declare a Buffer:

char buffer[100];: An array to store the input string, with a size of 100 characters.

Read Input with fgets:

fgets(buffer, sizeof(buffer), stdin);: This reads a line of input from the standard input (stdin) and stores it in buffer. It reads up to sizeof(buffer) - 1 characters to ensure there's room for the null terminator ('\0').

Remove Newline Character:

size_t len = strlen(buffer);: Calculate the length of the string.

if (len > 0 && buffer[len - 1] == '\n') { buffer[len - 1] = '\0'; }: Check if the last character is a newline ('\n') and replace it with a null terminator ('\0').

Print the Input:

printf("You entered: %s\n", buffer);: Print the input string.

Notes:
Buffer Size: Always ensure that the buffer size is sufficient to hold the input string and the null terminator.

Handling Newline: When using fgets, remember to handle the newline character that may be included in the input.

By using fgets this way, you can safely read strings in C without risking buffer overflow. If you have any more questions or need further assistance, feel free to ask! 😊

