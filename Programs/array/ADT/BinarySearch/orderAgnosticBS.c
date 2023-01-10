//Order Agnostic Binary Search

#include<stdio.h>
#include<stdbool.h>



struct array
{
    int a[10];
    int length;
    int size;
};


int oaBinaryS(struct array arr, int key)
{
    int start = 0;
    int end = arr.length-1;

    //Checking the order of the array
    bool asc = (arr.a[0] < arr.a[arr.length-1]);


    while(start<=end)
    {

        int mid = start + (end - start)/2;

        if(asc)
        {
            if(key > arr.a[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }else
            if(key > arr.a[mid])
                end = mid - 1;
            else
                start = mid + 1;
    }
}
void main()
{
    struct array arr = {{1,2,3,4,5},5,10};

    oaBinaryS(arr,4);
}