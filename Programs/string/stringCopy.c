#include<stdio.h>
#include<string.h>

#define BUFFER 100

void main()
{
    char orgstr[BUFFER] = "Hello world";
    char cpdstr[BUFFER];
    int i=0;
    // fgets(orgstr,BUFFER,stdin);

    while(orgstr[i] != '\0')
    {
        cpdstr[i] = orgstr[i];
        i++;
    }

    cpdstr[i] = '\0';

    printf("Original:");
    puts(orgstr);
    printf("\nCopied:");
    puts(cpdstr);
}