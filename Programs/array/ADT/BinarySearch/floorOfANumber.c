//Program to check ceiling of a number

#include<stdio.h>



struct array
{
    int a[10];
    int length;
    int size;
};


//Ceiling Function
int ceiling(struct array arr,int key)
{
    int start = 0;
    int end = arr.length-1;

    int mid;
    while(start<=end)
    {
        mid = start + (end - start)/2;

        if(key == arr.a[mid])
            return arr.a[mid];

        if(key > arr.a[mid])
            start = mid + 1;
        else
            end = mid - 1;        
    }

    return arr.a[end];
}

void main()
{
    struct array arr = {{2,3,5,9,14,16,18},7,10};

    printf("%d\n",ceiling(arr,15));    
}