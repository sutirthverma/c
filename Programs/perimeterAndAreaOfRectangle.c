#include<stdio.h>
int main()
{
	int perimeter, area, l, b;
	
	l = 5;
	b = 5;
	
	perimeter = 2 * (l + b);
	area = l * b;
	
	printf("Perimeter of the given rectangle is = %d", perimeter);
	printf("\nArea of the given rectangle is = %d", area);
	
	return 0;
}
