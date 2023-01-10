#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 10

void main()
{
    char *str;
    char find;
    fgets(str,BUFFER,stdin);
    scanf("%c",&find);
    int i = 1;
    while(*str != '\0')
    {
        if(find == *str)
        {
            printf("Position:%d\n",i);
            break;
        }
        str++;
        i++;
    }

    if(*str == '\0')
        printf("Character is not present in the string.");
    free(str);
}