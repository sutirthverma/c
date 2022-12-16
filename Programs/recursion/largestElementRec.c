// #include <stdio.h>

// int largest(int ar[], int size, int lg)
// {
//     static int i;

//     if (i < size)
//     {
//         if (lg < ar[++i])
//             lg = ar[++i];

//         ++i;
//         largest(ar, size, lg);
//         return lg;
//     }

//     return lg;
// }

// void main()
// {
//     int ar[] = {5, 3, 6, 8, 6, 4};
//     int size = sizeof(ar) / sizeof(ar[0]);
//     printf("Greatest element in the array is: %d\n", largest(ar, size, ar[0]));
// }

#include <stdio.h>

int largest(int ar[], int size, int lg)
{
    static int i;

    if (i < size)
    {
        if (lg < ar[i])
            lg = ar[i];

        ++i;
        largest(ar, size, lg);
        return lg;
    }

    return lg;
}

void main()
{
    int ar[] = {5, 3, 6, 8, 6, 4};
    int size = sizeof(ar) / sizeof(ar[0]);
    printf("Greatest element in the array is: %d\n", largest(ar, size, ar[0]));
}