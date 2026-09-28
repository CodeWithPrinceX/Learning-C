#include <stdio.h>
#include <string.h>

typedef struct user
{
    int rollNo;
    char name[20];
    float marks;
} Student;

int main()
{
    int size, maxIndex = 0;
    printf("Enter size of student: ");
    scanf("%d", &size);

    Student s[size];

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Enter Roll no: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 1; i < size; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }

    printf("\n----Student With Highest Marks----\n");
    printf("Roll Number : %d\n", s[maxIndex].rollNo);
    printf("Name : %s\n", s[maxIndex].name);
    printf("Marks : %.2f\n", s[maxIndex].marks);

    return 0;
}