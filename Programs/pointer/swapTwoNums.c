#include <stdio.h>

void swap(int *num1, int *num2);
void main()
{
    int num1, num2, swapper;

    printf("Enter two numbers:");
    scanf("%d %d", num1, num2);
    printf("Before Swap\nNumber 1:%d\nNumber2:%d",num1,num2);

    swap(num1, num2);
}

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("After Swap\nNumber 1:%d\nNumber2:%d",*num1,*num2);
}
