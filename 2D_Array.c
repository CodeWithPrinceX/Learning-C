#include <stdio.h>

int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // printf("%d\n", matrix[0][1]); boring way of printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // question : find sum of the above diagonal elements

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j || i + j == 2)
            {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum is: %d", sum);
    return 0;
}