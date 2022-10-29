#include <stdio.h>

void main()
{
    int a = 10, b = 20;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("Value in p1:%d", p1);
    printf("\nValue in p2:%d", p2);

    printf("\nSubtraction:%p", p1 - p2);
}