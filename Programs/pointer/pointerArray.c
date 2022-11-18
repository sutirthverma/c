//Pointers and Array

#include<stdio.h>

void main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    printf("%d\n",a[1]);
    printf("%d\n",p++);
}