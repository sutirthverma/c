// Static Array
#include <stdio.h>
#include <stdlib.h>

struct array
{
    int a[10];
    int size;
    int length;
};

// Display()
void display(struct array arr)
{
    int i;
    printf("\nElements:\n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.a[i]);
}

// Add(value)/Append(value)
void append(struct array *arr, int value)
{
    if (arr->length < arr->size)
        arr->a[arr->length++] = value;
}

// Insert(index,x)
void insert(struct array *arr, int index, int value)
{
    int i;
    if (index >= 0 && index <= arr->length)
        for (i = arr->length; i > index; i--)
            arr->a[i] = arr->a[i - 1];

    arr->a[index] = value;
    arr->length++;
}

// Delete(index)
void delete(struct array *arr, int index)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = index; i < arr->length; i++)
            arr->a[i] = arr->a[i + 1];

        arr->length--;
    }
}

// Normal Linear Search
int linear(struct array arr, int key)
{
    int i;
    for (i = 0; i < arr.length; i++)
    {
        if (key == arr.a[i])
            return 1;
    }

    return -1;
}

// Improved Linear Search

// Swap function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

//(1)Transposition
int transposition(struct array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            swap(&arr->a[i], &arr->a[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

//(2)Move to Front
int mtf(struct array *arr, int key)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        if (key == arr->a[i])
        {
            swap(&arr->a[i], &arr->a[0]);
            return 0;
        }
    }
    return -1;
}

void main()
{
    struct array arr = {{8, 3, 7, 12, 6, 9}, 10, 6}; // Array Elements, Size, Length
    printf("Before appending and increasing:");
    display(arr);

    append(&arr, 10);
    insert(&arr, 4, 15);
    printf("\nAfter appending and increasing:");
    display(arr);
    // printf("\nDeleteing element:");
    // delete (&arr, 3);
    // display(arr);
    printf("\nCheck if 9 is present in the array.\n");
    linear(arr, 9) == 1 ? printf("9 is present in the array.") : printf("9 is not present in the array.");

    // Improved Linear Searches
    transposition(&arr, 9);
    printf("\nTransposed Linear Search:");
    display(arr);

    mtf(&arr, 9);
    printf("\nMove To Front/Head Linear Search:");
    display(arr);
    printf("\n");
}




/* Dynamic Array
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

    First we will start with array length 0 then arfter entering elements
    we will change the length to the no. of elements entered

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
*/