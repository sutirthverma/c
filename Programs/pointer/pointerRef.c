//Pointers as Function Arguments - Call by Reference
#include<stdio.h>

void inc(int *num)
{
    *num = *num + 1;
}

void main()
{
    int a;
    a = 10;
    inc(&a);
    printf("a = %d",a);
}