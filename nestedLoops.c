#include <stdio.h>

int main()
{
    int n = 5;

    // Pattern (i) ---> 5 x 5 square

    printf("\nPattern 1: Square\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }


    // Pattern (ii) ---> Right triangle

    printf("\nPattern 2: Right Triangle\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }


    // Pattern (iii) ---> Mirror right triangle

    printf("\nPattern 3: Mirror Right Triangle\n");

    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        // Stars
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }


    // Pattern (iv) ---> V shaped

    printf("\nPattern 4: V Shape\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (i == j || i + j == 2 * n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}