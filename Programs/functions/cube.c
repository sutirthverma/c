//Cube of a number

#include <stdio.h>

int cube(int num);
int main()
{
    int n;

    printf("Enter a number:");
    scanf("%d", &n);

    printf("Cube of %d is %d",n,cube(n));
    return 0;
}

int cube(int num){
    return num * num * num;
}