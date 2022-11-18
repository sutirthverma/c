#include<stdio.h>

int main()
{
	int num , remainder;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	remainder = num % 2;
	
	if(remainder == 0)
		printf("Number is even.");		
	else
		printf("Number is odd.");
			
	return 0;	
}
