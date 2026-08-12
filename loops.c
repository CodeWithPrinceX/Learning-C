#include <stdio.h>

int main()
{
    // FOR LOOP:

    for (int i = 0; i < 100; i = i + 1)
    {
        // printf("Hello World \n");
    }

    // for loop with float
    for (float number = 1; number <= 5.0; number++)
    {
        printf("%f \n", number);
    }

    // Question -> print numbers 0-10
    for (int number = 0; number < 11; number++)
    {
        printf("%d \n", number);
    }

    // Increment operator
    // i++ (Post increment operator) / ++i (Pre increment operator)
    // i-- (Post decrement operator) / --i (Pre decrement operator)

    // int number = 1;
    // printf("%d \n", number++); // first use then increase
    // printf("%d \n", number);    // output -> 1 2

    // printf("%d \n", ++number); // firstly increase then use
    // printf("%d \n", number);    // output -> 2 2

    // WHILE LOOP:

    int count = 1;

    while (count <= 5)
    {
        printf("Hello World \n");
        count++;
    }

    // Example:
    // int inputNumber;
    // printf("enter number: ");
    // scanf("%d", &inputNumber);

    // int count = 0;
    // while (count <= inputNumber)
    // {
    //     printf("%d \n", count);
    //     count++;
    // }

    // DO-WHILE LOOP:

    int doWhileCount = 1;

    do
    {
        printf("%d \n", doWhileCount);
        doWhileCount++;
    } while (doWhileCount <= 5);

    // Sum of n natural numbers where n is the input from user:

    int number;
    printf("enter number: ");
    scanf("%d", &number);

    int sum = 0;

    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    printf("Sum is %d\n", sum);

    // Print the table of a number entered by user:

    int tableNumber;
    printf("enter number: ");
    scanf("%d", &tableNumber);

    int table;

    for (int multiplier = 1; multiplier <= 10; multiplier++)
    {
        table = tableNumber * multiplier;
        printf("%d x %d = %d\n", tableNumber, multiplier, table);
    }

    // // (i) Keep taking number as input until odd appears:

    int n;

    do
    {
        printf("enter number: ");
        scanf("%d", &n);

        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }

    } while (1); // 1 -> true

    printf("Thank you\n");

    // // (ii) keep taking number as input unitl multiple of seven come

    int k;

    do
    {
        printf("enter number: ");
        scanf("%d", &k);
        printf("%d \n", k);

        if (k % 7 == 0)
        {
            break;
        }
    } while (1);

    printf("Shukriya apka");

    // // continue stat ---> opposite to break

    for (int l; l <= 5; l++)
    {
        if (l == 4)// skip
        {
            continue;
        }
        printf("%d \n", l);
    }

    // // print all odd number from 5 -> 50

    for(int g=5; g<=50; g++){
        if(g % 2 != 0){
            printf("%d \n", g);
        }
    }

    // factorial of a number(input)
    int factorial;
    printf("enter number:");
    scanf("%d", &factorial);
    int result = 1;
    for (int f = 1; f <= factorial; f++)
    {
        result = result * f;
    }
    printf("%d", result);
    return 0;
}