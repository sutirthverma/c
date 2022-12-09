#include<stdio.h>
#include<stdbool.h>

bool sort(int ar[], int len, int i)
{
    if(i==len)
        return true;
    
    if(ar[i]<ar[++i])
        return sort(ar,len,++i);
    
    return false;
}

void main()
{
    int arr[] = {1,2,3,6,3};//Not sorted
    int len = sizeof(arr)/sizeof(arr[0]);//Size of whole array divided by size of 1st element
    printf("%d\n",sort(arr,len,0));
}