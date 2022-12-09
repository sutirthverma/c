#include<stdio.h>
#include<stdbool.h>

bool p(int n){
    static int x = 0;
    if(n>=x)
    {
        if(2^x == n)
        {
            return true;
        }   

        if(2^x > n)
        {
            return false;
        }

        x++;
        p(n);
            
    }
    return NULL;
}

void main()
{
    printf("%b\n",p(3));
}