#include<stdio.h>
int main()
{
    int amt;
    printf("Enter the amount of time you want to run the loop:");
    scanf("%d", &amt);

    for(int i = 0;i <= amt; i++){
        printf("Loop No. %d", i);
    }
    return 0;
}
