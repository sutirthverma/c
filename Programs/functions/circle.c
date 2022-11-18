// Program to find diameter, circumference and area of circle using function

#include <stdio.h>

const float pi = 3.14;

int diameter(int radius);
int circum(int radius);
int area(int radius);

int main()
{
    int r;
    printf("Enter the radius of circle:");
    scanf("%d", &r);

    printf("Diameter = %d units", diameter(r));
    printf("\nCircumference = %d units", circum(r));
    printf("\nArea = %d units", area(r));

    return 0;
}

int diameter(int radius)
{
    return 2 * radius;
}

int circum(int radius)
{
    return 2 * pi * radius;
}

int area(int radius)
{
    return pi * radius * radius;
}