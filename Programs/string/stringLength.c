// #include<stdio.h>
// #include<string.h>

// void main()
// {
//     char s[] = "Hello"; //Length of this string is 5
//     printf("%d",strlen(s));
// }

//Without any predefined function:
#include<stdio.h>
#include<string.h>
#define BUFFER 100


void main()
{
    char str[BUFFER];
    fgets(str,BUFFER,stdin);
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    printf("%d\n",i-1);
}