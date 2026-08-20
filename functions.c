#include <stdio.h>

// func declaration
int sum(int a, int b);
void printHello();
int max(int a, int b);
int min(int a, int b);
void swap(int a, int b);

int main()
{
    // func call
    // printf("Sum is: %d\n", sum(5, 6));
    // printf("Max : %d\n", max(5, 2));
    // printf("Min : %d\n", min(5, 2));
    // printHello();

    int a = 10, b = 20;
    printf("Before swap: a=%d, b=%d", a, b);
    swap(a, b);
    printf("After swap: a=%d, b=%d", a, b);
    return 0;
}

// func implementation
int sum(int a, int b)
{
    return a + b;
}
void printHello()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Hello World\n");
    }
}
int max(int a, int b)
{
    return a >= b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After swap: a=%d, b=%d", a, b);
}