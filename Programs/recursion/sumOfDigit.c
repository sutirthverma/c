#include<stdio.h>

int sod(int n)
{
    if(n < 10)
    {
        return n;
    }

    return n%10 + sod(n/=10);
}

void main()
{
    printf("%d\n",sod(1343)); //sum = 1+3+4+3 = 11;
}