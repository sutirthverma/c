//Find the smallest number for the given array
#include<stdio.h>

struct array
{
    int a[10];
    int length;
    int size;
};


void main()
{
    struct array arr = {{8,12,-8,-7,3},5,10};
    int min = arr.a[0];
    for(int i = 1; i < arr.length; i++)
    {
        if(arr.a[i] < min)
            min = arr.a[i];
    }

    printf("Minimum number in the given array is: %d\n",min);
}