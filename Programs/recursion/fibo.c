#include<stdio.h>

void fibo(int n, int a, int b, int c)
{
    if(n>0)
    {
        c = a+b;
        a = b;
        b = c;
        printf("%d ",c);
        fibo(n-1,a,b,0);
    }
}

void main()
{
    fibo(10,0,1,0);
    printf("\n");
}