#include<stdio.h>
#include<stdlib.h>


void main()
{
    //Array in Stack
    int stackArray[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    //Arry Partially in Stack and Heap

    int *heapArray[3];
    int *q = (int *)malloc(5*4);

    heapArray[0] = (int *) malloc (3*sizeof(int));
    heapArray[1] = (int *) malloc (3*sizeof(int));
    heapArray[2] = (int *) malloc (3*sizeof(int));

    heapArray[0] = 5;
    heapArray[1] = 8;
    heapArray[2] = 9;
    heapArray[3] = 6;
    heapArray[4] = 4;
    //Array Fully in Heap
    int **fullArrayHeap;
    fullArrayHeap = (int **) malloc (3*sizeof(int *));
    fullArrayHeap[0] = (int *) malloc (3*sizeof(int));
    fullArrayHeap[1] = (int *) malloc (3*sizeof(int));
    fullArrayHeap[3] = (int *) malloc (3*sizeof(int));

}