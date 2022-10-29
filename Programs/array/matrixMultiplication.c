#include <stdio.h>

int main()
{
    int arows, acolumns;
    int i, j;
    printf("Enter the number of rows and columns in matrix 'a':");
    scanf("%d %d", &arows, &acolumns);

    int a[arows][acolumns];
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d",a[i][j]);
        }
    };
    return 0;
}