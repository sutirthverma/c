#include <stdio.h>

int main()
{
    int sp, cp, result;

    printf("Enter selling price:");
    scanf("%d", &sp);
    printf("Enter cost price:");
    scanf("%d", &cp);

    if (sp > cp)
    {
        printf("Profit Amount = %d", sp - cp);
    }
    else if(sp < cp)
    {
        printf("Loss Amount %d", cp - sp);
    }else{
        printf("Neither profit nor loss.");
    }
    return 0;
}