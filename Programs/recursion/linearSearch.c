//Linear Search Using Recusrion

#include<stdio.h>
#include<stdbool.h>

bool linear(int ar[],int len,int i,int n)
{
    if(i<len)
    {
        return (ar[i] == n) || linear(ar,len,++i,n);
    }

    return false;
}

void main()
{
    int ar[] = {3,2,1,1,8};
    int len = sizeof(ar)/sizeof(ar[0]);
    int n = 18;
    linear(ar,len,0,n) == 1? printf("true\n"):printf("false\n");
}