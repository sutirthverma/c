// Fibonacci using recursion
#include <stdio.h>

int fibo(int n)
{

    if (n < 2)
    {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    printf("%d", fibo(6));
    return 0;
}