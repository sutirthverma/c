#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100


void main()
{
    char str1[BUFFER] = "Hello";
    char str2[BUFFER] = "Mate!";
    int i = 0,j=0;

    while(str1[i] != '\0')
        i++;

    str1[i] = ' ';
    i++;

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    puts(str1);
}