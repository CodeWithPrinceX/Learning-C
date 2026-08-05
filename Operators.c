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

    // RELATIONAL OPERATOR'S..

    printf("%d \n", 4 == 4);
    return 0;
}
 