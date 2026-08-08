#include <stdio.h>

int main()
{
    // int age;
    // printf("enter age: ");
    // scanf("%d", &age);

    // if (age > 18)
    // {
    //     // printf("you can drive \n");
    //     printf("you are an adult \n");
    // }
    // else if (age < 13 && age < 18)
    // {
    //     printf("you are teenager \n");
    // }
    // else
    // {
    //     printf("child \n");
    // }

    // // CONDITIONAL OPERATORS:

    // // 1>TERNARY

    // age >= 18 ? printf("adult \n"):("not adult \n");

    // // 2> SWITCH

    // int day; // 1-mon, 2-tues, 3-wed
    // printf("enter day(1-7): ");
    // scanf("%d", &day);
    // switch (day)
    // {
    // case 1:
    //     printf("Monday \n");
    //     break;
    // case 2:
    //     printf("Tuesday \n");
    //     break;
    // case 3:
    //     printf("Wednesday \n");
    //     break;
    // case 4:
    //     printf("Thursday \n");
    //     break;
    // case 5:
    //     printf("Friday \n");
    //     break;
    // case 6:
    //     printf("Saturday \n");
    //     break;
    // case 7:
    //     printf("Sunday \n");
    //     break;
    // default:
    //     printf("not a valid day! \n");
    // }

    // NESTED-STATEMENTS
    int number;
    printf("enter number: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("positive \n");
        if (number % 2 == 0)
        {
            printf("even \n");
        }
        else
        {
            printf("odd \n");
        }
    }
    else
    {
        printf("negative \n");
    }

    return 0;
} 