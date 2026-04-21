PROGRAM
#include <stdio.h>

int fib(int n)
{
    /* Base Condition: If n is 0 or 1, the term is the value itself */
    if (n <= 1)
    {
        return n;
    }

    /* Recursive Step: F(n) = F(n-1) + F(n-2) */
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, result = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n != 1 || n < 0)
    {
        printf("Invalid input\n");
        return 1;
    }
    printf("\nNth Fibonacci term = %d\n", fib(n));
    return 0;
}
OUTPUT
Enter the value of n: 5

Fibonacci Series: 0 1 1 2 3 5
Nth Fibonacci term = 5
