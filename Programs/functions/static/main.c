#include<stdio.h>
#include<stdlib.h>
int fun(int num1, int num2);
int main()
{
    int a , b;
    printf("Enter any two nunbers:");
    scanf("%d %d",&a,&b);

    fun(a,b);
    return 0;
}

int fun(int num1, int num2)
{
    return printf("%d",num1 + num2);
}