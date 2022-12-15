#include <stdio.h>
#include <stdlib.h>

struct array{
    int *a;
    int size;
    int length;
};

//Function for displaying array elements
void display(struct array arr)
{
    int i;
    printf("\nElements:\n");
    for(i = 0;i < arr.length;i++)
        printf("%d\n",arr.a[i]);
}

void main()
{
    struct array arr;
    int n,i;
    
    //Size of the array
    printf("Enter the size of array:");
    scanf("%d",&arr.size);

    //Allocating memory dynamically to the array.
    arr.a = (int *)malloc(arr.size*sizeof(int)); 

    /*First we will start with array length 0 then arfter entering elements 
    we will change the length to the no. of elements entered*/
    arr.length = 0;

    //Entering the no. of elements we will store in array(length of the array)
    printf("\nEnter the numbers of numbers:");
    scanf("%d",&n);

    //Entering elements
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr.a[i]);

    //Changing the array length to 'n'(no. of elements)
    arr.length = n;

    //Display function to display all the elements of the array
    display(arr);

    printf("\n");

}