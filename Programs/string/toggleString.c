#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER 20


void toggle(char *string)
{
    while(*string != '\0')
    {
         if(*string >= 'a' && *string <= 'z')
            *string = *string - 32;
        else if(*string >= 'A' && *string <= 'Z')
            *string = *string + 32;

        *string++;
    }
}
void main()
{
    char string[BUFFER] = "ToGgle ThiS sTrInG";

    int i = 0;

    puts(string); //Printing string before toggling
    toggle(string); //Calling function that perfom the toggling function
    puts(string); //Priting string after toggling
}