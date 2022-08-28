#include <stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter a natural number:");
    scanf("%d", &n);

    if (n > 0)
    {
        while (i <= n)
        {
            printf("%d\n", i);
            i++;
        }
    }
    else
    {
        printf("Number is not a natural number.");
    }
    return 0;
}