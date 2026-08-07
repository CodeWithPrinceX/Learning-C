#include <stdio.h>
#include <math.h>

int main()
{

    // ARTHEMATIC OPERATOR'S.

    int p, q;
    p = q = 2;
    // int p + q = r;    this is invalid as there can only be one variable on LHS.
    int r = p + q;
    int s = p / q;
    int t = pow(p, q);

    printf("r = %d \n", r);
    printf("s = %d \n", s);
    printf("t = %d", t);

    /*  MODULAR OPERATOR :
    -> if we want roundoff remainder convert it to int else float for full remainder
    -> Gives Remainder,
    -> It doesnt work on float values*/

    printf("%d", 7 % 4);

    /*TYPE CONVERSIONS:
     -> int - int => int
     -> int - float => float
     -> float - float => float
    */

    printf("%f \n", 4 / 2.0);
    printf("%d \n", 6 / 3);

    // question
    int a = (int)1.99999; /*initial dataType -> double but forcefully converted it to integer.*/
    printf("%d \n", a);

    // OPERATOR PRECEDENCE :  like BODMAS c also has priority order to perform arthematic opertns.

    /*
     order from high to low => (*,/,%) -> (+,-) -> =
     */

    int z = 4 + 9 * 10;
    printf("%d \n", z);
    printf("%d \n", 5 * 2 - 2 * 3);
    printf("%d \n", 5 * 2 / 2 * 3);
    printf("%d \n", 5 * (2 / 2) * 3);
    printf("%d \n", 5 + 2 / 2 * 3);

    // Relational operators :

    printf("%d \n", 4 == 4); // true == 1

    printf("%d \n", 4 > 4); // false == 0

    printf("%d \n", 4 != 3); // != not equal to..

    // Logical operators :

    /*
    && --> AND (all conditions should be fullfiled)
    || --> OR (ek condition se bhi kaam chaljayga )
    ! --> NOT
    */

    printf("%d \n", 5 > 2 && 4 > 3); // Result -- true as both conditions are true..
    printf("%d \n", 3 < 2 || 5 > 1);

    // Assignment operators :
    /*
      opr -->  = , +=, -=, *=, /=, %=
    */

    int k = 3;
    int l = 2;
    printf("%d \n", k %= l); // same with -, /, *, +

    // write program to know if a number is divisible by 2 or not;

    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("%d ", x % 2 == 0);

    /* write program to know if a number is even or odd;
         even --> 1 , odd --> 0
 */
    int y;
    printf("enter a number: ");
    scanf("%d", &y);
    printf("%d", y % 2 == 0);

    // question 
    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);

    // question -> if a no is greater than 9 and less than 100 so the condn is true
    int u;
    printf("enter a number: ");
    scanf("%d", &u);
    printf("%d \n", u>9 && u <100);

    return 0;
}
