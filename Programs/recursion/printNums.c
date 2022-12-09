#include<stdio.h>

void print(int n, int num)
{
    if(n <= num)
    {
        printf("%d ",n);
        print(n+1,num);
    }
}

void main()
{
    print(1,100);
    printf("\n");
}