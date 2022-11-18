#include <stdio.h>

int main()
{
    char i, n;
    printf("Enter an alphabet:");
    scanf("%c", &n);

    if (n >= 'a' && n <= 'z') 
    {
        i = 'a';
        while (i <= n)
        {
            printf("%c\n", i);
            i++;
        }
    }else if( n >='A' && n <= 'Z'){
       i = 'A';
       while (i <= n)
        {
            printf("%c\n", i);
            i++;
        }
    }
    else
    {
        printf("Enter a valid alphabet.");
    }
    return 0;
}