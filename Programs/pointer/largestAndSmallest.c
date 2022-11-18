#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];

    for (int i = 1; i <= len; i++)
    {
        if (*min > arr[i])
        {
            *min = arr[i];
        }

        if (*max < arr[i])
        {
            *max = arr[i];
        }
    }
}

void main()
{
    int a[] = {23, 45, 6, 98, 115, 4, 9, 443};
    int min, max;
    int len = sizeof(a) / sizeof(a[0]);

    minMax(a, len, &min, &max);
    printf("Minimum value is = %d", min);
    printf("\nMaximum value is = %d", max);
}