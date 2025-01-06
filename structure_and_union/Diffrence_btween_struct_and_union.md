Structures (struct) and unions (union) are both user-defined data types in C that allow you to store different types of data in a single variable. However, there are key differences in how they manage memory and how their members are accessed.

Main Differences Between struct and union:
Memory Allocation:

struct:

In a struct, each member has its own storage location.

The total size of the struct is the sum of the sizes of all its members.

Example:

c
struct ExampleStruct {
    int a;
    float b;
    char c;
};
// Size of ExampleStruct is sizeof(int) + sizeof(float) + sizeof(char)
union:

In a union, all members share the same memory location.

The total size of the union is the size of its largest member.

Example:

c
union ExampleUnion {
    int a;
    float b;
    char c;
};
// Size of ExampleUnion is sizeof(float) (assuming float is the largest member)
Access to Members:

struct:

All members of a struct can be accessed and used simultaneously.

Example:

c
struct ExampleStruct {
    int a;
    float b;
    char c;
};
struct ExampleStruct es;
es.a = 10;
es.b = 3.14;
es.c = 'A';
union:

Only one member of a union can be accessed at a time because they share the same memory location.

Writing to one member of a union will overwrite the values of other members.

Example:

c
union ExampleUnion {
    int a;
    float b;
    char c;
};
union ExampleUnion eu;
eu.a = 10;
// At this point, only 'a' is valid; accessing 'b' or 'c' would be unreliable.
Use Cases:

struct:

Best used when you need to store related data of different types together and need to access all of them simultaneously.

Commonly used for defining complex data structures like records, structs, and more.

union:

Useful when you need a variable that can hold different types of data at different times but only one type at a time.

Commonly used in scenarios like managing memory, type punning, and handling different types of data in a single memory location.

Example Illustrating Differences:
struct Example:
c
#include <stdio.h>

struct ExampleStruct {
    int a;
    float b;
    char c;
};

int main() {
    struct ExampleStruct es = {10, 3.14, 'A'};
    printf("Struct: a = %d, b = %.2f, c = %c\n", es.a, es.b, es.c);
    return 0;
}
union Example:
c
#include <stdio.h>

union ExampleUnion {
    int a;
    float b;
    char c;
};

int main() {
    union ExampleUnion eu;
    eu.a = 10;
    printf("Union: a = %d\n", eu.a);
    eu.b = 3.14;
    printf("Union: b = %.2f\n", eu.b);
    eu.c = 'A';
    printf("Union: c = %c\n", eu.c);
    return 0;
}
In the union example, only the value of the last assigned member (c) is reliable at any given point.