#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 100

int main()
{
    char string[BUFFER];
    char ch;
    fgets(string,BUFFER,stdin);
    scanf("%c",&ch);
    int len = strlen(string);

    while(len >= 0)
    {
        if(string[len] == ch)
        {
            printf("Position:%d\n",len+1);
            break;
        }

        len--;
    }

    if(len < 0)
        printf("Character does not exist in the string.\n");
}