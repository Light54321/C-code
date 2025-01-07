#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[50];
    int roll_number;
    float marks;
} student;
student stud[5000000];
int main()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d", &n);
    printf("Enter information of students:\n");
    while (getchar() != '\n')
        ;
    for (int i = 0; i < n; i++)
    {    printf("%d\n",i+1);
        // input name
        printf("Enter name:");
        fgets(stud[i].name, sizeof(stud[i].name), stdin);
        int len = strlen(stud[i].name);
        if (stud[i].name[len - 1] == '\n' && len > 0)
        {
            stud[i].name[len - 1] = '\0';
        }
        // input roll number
        printf("Enter roll number:");
        scanf("%d", &stud[i].roll_number);
        while (getchar() != '\n')
            ;
        // input marks
        printf("Enter marks:");
        scanf("%f", &stud[i].marks);
        while (getchar() != '\n')
            ;
    }
    return 0;
}