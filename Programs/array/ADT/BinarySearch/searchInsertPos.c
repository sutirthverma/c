#include<stdio.h>



struct array
{
    int a[10];
    int length;
    int size;
};

int binarySearch(struct array arr, int target)
{
    int start = 0;
    int end = arr.length -1;
    
    int mid;
    
    //Base Cond
    if(target >= arr.a[arr.length-1])
        return arr.length;
        
    
        
    while(start<=end)
    {
        mid = (start+end)/2;
        
        if(target == arr.a[mid])
            return mid;
            
        if(target>arr.a[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    
    return start;
}
void main()
{
    struct array arr = {{1},1,10};
    
    printf("%d ",binarySearch(arr,2));
}