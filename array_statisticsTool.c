#include <stdio.h>

int sum(int arr[], int n);
float avg(int arr[], int n);
int max(int arr[], int n);
int min(int arr[], int n);

int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements of an array:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("sum is : %d\n", sum(arr, size));
    printf("avg is : %.2f\n", avg(arr, size));
    printf("maximum element is : %d\n", max(arr, size));
    printf("minimum element is : %d\n", min(arr, size));
    printf("size of array is : %lu", sizeof(arr)/sizeof(arr[0]));

    return 0; 
}

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

float avg(int arr[], int n)
{
    int s = sum(arr, n);

    return (float)s / n;
}

int max(int arr[], int n)
{
    int maxEle = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxEle)
            maxEle = arr[i];
    }
    return maxEle;
}

int min(int arr[], int n)
{
    int minEle = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minEle)
            minEle = arr[i];
    }
    return minEle;
}