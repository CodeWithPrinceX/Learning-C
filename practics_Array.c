#include <stdio.h>

int main()
{
    int n;

    printf("No of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rev[n];
    int j = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        rev[j++] = arr[i];
    }

    printf("Reverse array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }

    printf("\n");

    int var = arr[0];

    for(int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = var;

    printf("Left rotated array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}