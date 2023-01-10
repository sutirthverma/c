#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100

void main()
{
    char str[BUFFER] = "Hello";
    char rev[BUFFER];

    int i=0,j=0;

    while(str[i] != '\0')
    {
        i++;
    }

    i--;

    while(i >= 0)
    {
        rev[j] = str[i];
        j++;
        i--;
    }

    rev[j] = '\0';

    puts(str);
    puts(rev);
}