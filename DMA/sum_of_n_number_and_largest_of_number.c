#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    int n;
    printf("Enter the number of integers you want to enter:");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    // To find the largest number
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest number is %d \n", largest);

    // TO calculate the sum of all the numbers
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }
    printf("Sum of all the numbers is %d", sum);
    free(arr);
    return 0;
}