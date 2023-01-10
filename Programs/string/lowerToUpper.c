#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100

void main()
{
    char lower[BUFFER] = "Lower To Upper";
    char upper[BUFFER];
    int i = 0;

    while (lower[i] != '\0')
    {
        if(lower[i] <= 'z' && lower[i] >= 'a')
            upper[i] = lower[i] - 32;
        else
            upper[i] = lower[i];
        i++;
    }
    
    puts(upper);
    
}