#include <stdio.h>

int main()
{
    // Pattern-1 --> X
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        /*     for (int j = 1; j <= 5; j++)
     {
         if (i == j || i + j == 6)
         {3
             printf("* ");
         }
         else
         {
             printf("  ");
         }
     };
 */
        /* Pattern -2 --> numbered right triangle
        for (int j = 1; j <= i; j++)
        {
           printf("%d ",  j);
        }
 */

 //   Pattern -3 --> reverse of right triangle
        for (int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}