#include <stdio.h>

int sum(int *, int *);
void swap(int *, int *);

int sum(int *a, int *b)
{
    return *a + *b;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 72;
    int *j = &i;
    printf("Address of i is %p\n", &i);
    printf("Address of i is %p\n", j);
    printf("Value at address j is: %d\n", *(&i));

    int m = 45;
    int *k = &m;
    int **n = &k;

    printf("Value of i is : %d\n", i);
    printf("Value of i is : %d\n", *j);

    int x = 1, y = 7;
    printf("Sum is : %d\n", sum(&x, &y));

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
