#include<stdio.h>

int mul(int n)
{
    if(n == 0)
        return 1;
    else
        return mul(n-1) * n;        
}

void main()
{
    printf("%d\n",mul(5));
}