#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    printf("No of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rev[n];
    int j = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        rev[j++] = arr[i];
    }

    printf("Reverse array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev[i]);
    }

    printf("\n");

    int var = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = var;

    printf("Left rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // question 3 : linear search:
    
    int selectedNum = 13;
    int arr[] = {22, 3, 54, 9, 13};
    bool found = false;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (selectedNum == arr[i])
        {
            printf("Value of index = %d", i);
            found = true;
            break;
        }
    }

    if (found == false)
    {
        printf("No match found");
    }

    return 0;
}