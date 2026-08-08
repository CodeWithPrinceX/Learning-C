#include <stdio.h>

int main()
{
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        // printf("you can drive \n");
        printf("you are an adult \n");
    }
    else if (age < 13 && age < 18)
    {
        printf("you are teenager \n");
    }
    else
    {
        printf("child \n");
    }

    return 0;
}