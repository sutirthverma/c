#include<stdio.h>


int linear(int ar[],int key, int size)
{
    int i;
    for(i=0; i<size;i++)
    {
        if(ar[i] == key)
            return i;
    }
}

void main()
{
    int n,k,i,j,d;
    scanf("%d %d",&n,&k);
    int a[k];
    for(i = 0; i <= k; i++)
    {
        a[i] = i;
        d++;
        if(i == n)
        {
            for(j=n-1; j>0; j--)
            {
                a[j]=d;
                d++;
            }
        }
    }
    int size = sizeof(a)/4;
    printf("%d\n",linear(a,k,size));
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
}