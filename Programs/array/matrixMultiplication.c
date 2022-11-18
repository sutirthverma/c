#include <stdio.h>

void main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {9,8,7,6,5,4,3,2,1};
    int row, col, sum, mul[3][3];
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            sum = 0;
            for (int i = 0; i < 3; i++)
            {
                sum += a[row][i] * b[i][col];
            }
            mul[row][col] = sum;
        }
    }

    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d ", mul[row][col]);
        }
        printf("\n");
    }
}