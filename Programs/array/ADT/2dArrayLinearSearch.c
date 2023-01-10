#include<stdio.h>



linear2d(int ar[3][3], int key)
{
    int i,j;
    int returnArray[2][2];
    for(i = 0; i < 3; i++)
    {
        for( j = 0; j < 3; j++)
            if(ar[i][j] == key)
                return returnArray;
    }
}
void main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int key = 8;
    int *fARR = linear2d(arr[3][3], key);

    for(int i = 0;i<2;i++)
        printf("[%d] ",fARR[i]);
}