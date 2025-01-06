#include <stdio.h>
#include <string.h>
// sturture deeclaration.
struct student
{
    int roll_number;
    char name[20];
    float sub1, sub2, sub3;
};
struct student stud[50]; // sturture variable declaration.

int main()
{
    int n;
    printf("number of student data you want to enter:");
    scanf("%d", &n);
    getchar();
    printf("Enter the name of student,roll number and marks of three subject:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: \n", i + 1);
        printf("Name : ");
        // gets(stud[i].name);
        fgets(stud[i].name, sizeof(stud[i].name), stdin);
        int len = strlen(stud[i].name);
        // printf(" length is :%d\n", len);
        // Here while calculating length it also include'\n'[new inline character]
        // character (only for fets not for gets ).
        if (len > 0 && stud[i].name[len - 1] == '\n')
        {
            stud[i].name[len - 1] = '\0';
        }

        // The main issue with your code is that after using scanf, the
        // newline character remains in the input buffer, which can interfere with subsequent fgets calls.
        // you need to clear the input buffer after each scanf call.
        // it is necessary to use getchar() to consume the newline character left in the input buffer by scanf.
        // This prevents the newline character from being read by the subsequent fgets call,
        //  which would cause it to skip the input.

        // printf("Roll number : ");
        // scanf("%d", &stud[i].roll_number);
        // printf("Marks of three subject\n");
        // printf("Physics :");
        // scanf("%f", &stud[i].sub1);
        // printf("Chemistry :");
        // scanf("%f", &stud[i].sub2);
        // printf("Maths :");
        // scanf("%f", &stud[i].sub3);
        // getchar();

        // Corrected code
        printf("Roll number: ");
        scanf("%d", &stud[i].roll_number);
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        printf("Marks of three subjects\n");
        printf("Physics: ");
        scanf("%f", &stud[i].sub1);
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        printf("Chemistry: ");
        scanf("%f", &stud[i].sub2);
        // Clear the input buffer
        while (getchar() != '\n')
            ;
        printf("Maths: ");
        scanf("%f", &stud[i].sub3);
        // Clear the input buffer
        while (getchar() != '\n')
            ;
    }
    printf("\n");
    // printing the student data.
    printf("Student data:\n");
      printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("name:%s\n", stud[i].name);
        printf("Roll number:%d\n", stud[i].roll_number);
        printf("Marks of three subject\n");
        printf("Physics:%0.2f\n", stud[i].sub1);
        printf("Chemistry:%0.2f\n", stud[i].sub2);
        printf("Maths:%0.2f\n", stud[i].sub3);
        printf("\n");
    }
    return 0;
}
