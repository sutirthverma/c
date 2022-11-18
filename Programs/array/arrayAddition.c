// Program that reads a 5x5 array of integers and then prints the row sum and the column sum:

#include <stdio.h>

int main()
{
    int i, j, rowSum, columnSum;
    int a[5][5] = {
        {8, 3, 9, 0, 10},
        {3, 5, 17, 1, 1},
        {2, 8, 6, 23, 1},
        {15, 7, 3, 2, 9},
        {6, 14, 2, 6, 0}};

    // Row
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            rowSum += a[i][j];
        }
        printf("%d ", rowSum);
        rowSum = 0;
    }

    printf("\n");

    // Column
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            columnSum += a[i][j];
        }
        printf("%d ", columnSum);
        columnSum = 0;
    }

    return 0;
}