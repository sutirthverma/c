#include<stdio.h>

int nod(int n)
{
    static int x;
    if(n<10)
        return ++x;

    ++x;
    return nod(n/10);
}

void main()
{
    printf("%d\n",nod(50));
}