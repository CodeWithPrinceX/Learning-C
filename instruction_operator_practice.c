#include <stdio.h>
#include <math.h>

// <question 1>
int main()
{
    int x, y, z;

    printf("Enter first number :");
    scanf("%d", &x);
    printf("Enter second number :");
    scanf("%d", &y);
    printf("Enter third number :");
    scanf("%d", &z);

    float avg;
    avg = (x + y + z) / 3.0;
    printf("Your avg is : %.2f", avg);

    // <question 2>


    return 0;
}
