//Sum of two numbers using pointers
#include<stdio.h>

void main()
{
    int num1 = 10, num2 = 20;
    int *a = &num1,*b = &num2,*c;
    *a = *c;
    *b = *a;
    *c = *b;
    printf("num1 = %d\nnum2 = %d",*a,*b);
}