#include <stdio.h>

// (i) Question 1 ---> print n to 1 (n == input)
// (ii) Question 2 ---> print 1 to n
//(iii) Question 3 ---> factorial of n

// declaration
void solve(int n);
int factorial(int n);

int main()
{
    solve(1);
    printf("Factorial = %d\n", factorial(6));
    return 0;
}

void solve(int n)
{
    if (n == 6) // ----> for printing 1 to n if n to 1 then  (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    solve(n + 1);
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        // recursive call
        return n * factorial(n - 1);
    }
}