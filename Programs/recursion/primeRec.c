#include<stdio.h>
#include<stdbool.h>

bool prime(int n)
{
    static int i = 2;
    if(i == n)
        return true;
    
    if(n%i == 0)
        return false;
    
    ++i;
    prime(n);
}

void main()
{
    int n = 7;
    prime(n) == 1 ? printf("Prime Nubmer.\n") : printf("Not Prime.\n");
}