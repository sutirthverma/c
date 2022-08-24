#include<stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("Enter the third number:");
    scanf("%d",&num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number 1 is the greatest.");
        }
        
    }else if (num2 > num3){
            printf("Number 2 is the greatest.");        
    }else{
            printf("Number 3 is the greatest.");
    }    
    return 0;
}
