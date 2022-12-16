//Increasing Size of Array
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *p, *q,i;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 5;
    p[1] = 8;
    p[2] = 9;
    p[3] = 6;
    p[4] = 4;

    //Before incresing
    printf("Before Incresing the Size of Array:\n");
    for(i=0;i<5;i++)
        printf("%d ",p[i]);

    printf("\n");

    //Incresing the size
    q = (int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++)
        q[i]=p[i];
    free(p);//Deleting the pointer 'p'
    p=q;
    q=NULL;
    p[5]=2;
    p[6]=3;
    printf("After Incresing the Size of Array:\n");
    for(i=0;i<10;i++)
        printf("%d ",p[i]);
    
    printf("\n");
}