#include <stdio.h>

/*
  %c      ----- character
  %d, %i  ----- integer
  %f      ----- float
  %ld or %li ---- long
  %lf     ----- double
*/

// output in C

// int main(){
//     int age = 18;
//     printf("age is %d \n", age);
//     float pi = 3.14;
//     printf("pie value is %f \n", pi);
//     char str = '*';
//     printf("this look like %c", str);
//     return 0;
// }

// input in C

// int main(){
//     int age;
//     printf("enter age");
//     scanf("%d", &age);
//     printf("age is : %d", age);
//     return 0;
// }

// addition of two numbers
int main()
{
    int a, b;
    printf("enter a \n");
    scanf("%d", &a);

    printf("enter b \n");
    scanf("%d", &b);

    int sum = a + b;
    printf("sum is:%d", sum);
    return 0; 
    
}