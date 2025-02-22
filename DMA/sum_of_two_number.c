#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr = (int *)malloc(4 * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Enter integer %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int largest=arr[0];
    for(int i=0;i<4;i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    printf("Largest number is %d",largest);
    free(arr);
    return 0;
}