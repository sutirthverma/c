#include<stdio.h>

void oneToN(int n)
{
    if(n>0)
    {
        oneToN(n-1);
        printf("%d ",n);
    }
}

void main()
{
    oneToN(5);
    printf("\n");
}