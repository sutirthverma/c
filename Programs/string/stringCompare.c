#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100

int compare(char *str1, char *str2)
{
    int i = 0;

    while(str1[i] != '\0')
    {
        if(str1[i] != str2[i])
            return 1;

        i++;
    }

    return 0;
}

void main()
{
    char str1[BUFFER] = "Hello";
    char str2[BUFFER] = "Helle";
    
    compare(str1,str2) == 0 ? printf("Same.\n") : printf("Not Same.\n");
}