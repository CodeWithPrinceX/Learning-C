#include <stdio.h>
#include <math.h>

// <question 1>
int main()
{
    // int x, y, z;

    // printf("Enter first number :");
    // scanf("%d", &x);
    // printf("Enter second number :");
    // scanf("%d", &y);
    // printf("Enter third number :");
    // scanf("%d", &z);

    // float avg;
    // avg = (x + y + z) / 3.0;
    // printf("Your avg is : %.2f", avg);

    // <question 2>
    int marks;
    printf("enter marks(1-100): ");
    scanf("%d", &marks);

    // marks <= 30 ? printf("FAIL \n") : printf("PASS \n");
    // return 0;
    
    // <question 3>
    if(marks < 30){
        printf("C \n");
    }
    else if(marks>=30 && marks<70){
        printf("B \n");
    }
    else if(marks>=70 && marks<90){
        printf("A \n");
    }
    else{
        printf("A++ \n");
    }

}
