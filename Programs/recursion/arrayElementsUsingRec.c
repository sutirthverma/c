// Print array elements using recursion

#include <stdio.h>

void rec(int arr[], int start, int len);
int main()
{
    int a[100];
    int n, i;

    printf("Enter the length of the array:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Output:\n");
    rec(a, 0, n);
    return 0;
}

void rec(int arr[], int start, int len)
{
    if (start >= len)
    {
        return;
    }
    printf("%d\n", arr[start]);
    rec(arr, start + 1, len);
}