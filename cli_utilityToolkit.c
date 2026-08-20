#include <stdio.h>

// function declaration
void sum();
void max();
void min();
void checkEvenOdd(int n);
void factorial(int n);

int main()
{
    int option;
    printf("---------CLI UTILITY TOOL KIT---------");
    do
    {
        printf("Choose your operation: \nPress 1. Sum\n2.Maximum\n3.Minimum\n4.CheckEvenOdd\n5.Find factorial\n6.Exit");
        scanf("%d", &option);

        switch (option)
        {
        }

    } while ();

    return 0;
}

void sum()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("sum of %d and %d = %d\n", a, b, a + b);
}

void max()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("maximum is %d\n", a > b ? a : b);
}
void min()
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("minimum is %d\n, a<b? a : b");
}

void checkEvenOdd(int n)
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);

    printf(n % 2 == 0 ? ("Even") : ("Odd"));
}

void factorial(int n)
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial of %d is : %d\n", n, fact);
}