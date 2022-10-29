#include <stdio.h>

int fac(int n);
int main()
{
    int val;

    printf("Enter the value:");
    scanf("%d\n", &val);
    printf("%d", fac(val));

    return 0;
}

int fac(int n)
{
    int a;
    if (n < 1)
    {
        return 0;
    }

    a = fac(n * n - 1);
    return a * n - 1;
}