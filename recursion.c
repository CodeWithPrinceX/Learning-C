#include <stdio.h>

void printHello(int n);

int main()
{
    printHello(5);
    return 0;
}
// Recursive function
void printHello(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }

    printf("Hello\n");
    // recursive call
    printHello(n - 1);
}