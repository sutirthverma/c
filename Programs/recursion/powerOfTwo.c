#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool po2(int n)
{
    static int x;
    if(pow(2,x)==n)
        return true;
    if(pow(2,x)>n)
        return false;
    
    x++;
    return po2(n);
}

void main()
{
    po2(4);
}