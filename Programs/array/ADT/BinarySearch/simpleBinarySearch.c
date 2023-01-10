// Check if 4 is present in the sorted array or not

#include <stdio.h>

struct array
{
    int a[10];
    int length;
    int size;
};

// Binary Search Using Loop
int binarySearch(struct array arr, int key)
{
    int start = 0;
    int end = arr.length-1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(key == arr.a[mid])
            return mid;

        if(key > arr.a[mid])
            start = mid+1;
        
        if(key < arr.a[mid])
            end = mid-1;        
    }

    return -1;
}

// Binary Search Using Recursion
// int RbinarySearch(int arr[], int start, int end, int key)
// {

//     int mid = (start + end) / 2;

//     // Base Condition
//     if (key == arr[mid])
//         return mid;

//     if (key > arr[mid])
//         return binarySearch(arr, mid + 1, end, key);

//     if (key < arr[mid])
//         return binarySearch(arr, start, mid - 1, key);
// }

void main()
{
    struct array arr = {{1, 2, 3, 4, 5}, 5, 10};
    printf("%d \n",binarySearch(arr,3));
}