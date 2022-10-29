//Pointer to Pointer
#include<stdio.h>

void main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d",*p);
    printf("\n%d",*q);
    printf("\n%d",**q);
    printf("\n%d",**r);
    printf("\n%d",***r);
    ***r = 10;
    printf("\nx = %d",***r = 10);    
}