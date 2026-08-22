#include <stdio.h>
#include <math.h>

int main()
{
    // question 1: (Hard coded)
    int side1 = 2;
    int side2 = 3;

    printf("Area of rectangle : %d\n", side1 * side2);

    int a, b;
    printf("Enter side 1st: ");
    scanf("%d", &a);
    printf("Enter side 2nd: ");
    scanf("%d", &b);

    printf("Area of rectangle: %d\n", a * b);

    // question 2:
    int radius, height;
    printf("Enter radius of circle : ");
    scanf("%d", &radius);
    printf("Area of circle is :%.2f\n", 3.14 * pow(radius, 2));
    printf("Enter height of cylender: ");
    scanf("%d", &height);
    printf("Enter radius of cylender : ");
    scanf("%d", &radius);
    printf("Volume of cylender is : %.2f\n", 3.14 * pow(radius, 2) * height);
    

    // question 3: centigrade -----> fahrenheit
    int Centigrade ;
    printf("Enter Temp(C): ");
    scanf("%d", &Centigrade);
    // °F = °C * 9/5 + 32
    printf("Temp(F): %.2f\n", (Centigrade * 9.0/5.0) + 32);
    return 0;
}