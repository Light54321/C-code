#include <stdio.h>

int main() {
    int i, n, sum_even = 0, sum_odd = 0;

    printf("Enter the range (n): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even =sum_even+i;
        } else {
            sum_odd = sum_odd+i;
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}


