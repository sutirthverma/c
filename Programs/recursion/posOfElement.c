#include<stdio.h>

void ls(int ar[],int len, int i, int n)
{
    if(i < len)
    {
        if(ar[i] == n)
            printf("%d ",i);

        ls(ar,len,++i,n);
    }
}

void main()
{
    int ar[] = {1,2,4,3,4,5}; //Position of 4 is 2 and 4
    int len = sizeof(ar)/sizeof(ar[0]);
    ls(ar,len,0,4);
    printf("\n");
}