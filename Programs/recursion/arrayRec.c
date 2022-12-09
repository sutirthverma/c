#include<stdio.h>
#include<stdbool.h>

bool f(int a[])
{
    static int x;
    if(a[x] > a[x++])
        return true;
    
    x++;
    return f(a);
}

void main()
{
    int ar[] = {1,2,4,8,9};
    printf("%d\n",f(ar));
}