#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100

void main()
{
    char str[BUFFER] = "madfdsam";
    char rev[BUFFER];

    strcpy(rev, str);
    strrev(rev);

    int result = strcmp(str,rev);

    result == 0 ? printf("Palindrome.\n") : printf("Not Palindrome.\n");

}