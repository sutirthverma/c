#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100

void main()
{
    char str[BUFFER] = "madfdsam";
    int i = 0, j = 0;

    while(str[i] != '\0')
        i++;

    i--;

    while(str[j] != '\0')
    {
        if(str[j] != str[i])
        {
            printf("Not a palindrome.\n");
            break;
        }

        j++;
        i--;
    }

    if(str[j] == '\0')
        printf("Palindrome.\n");
}