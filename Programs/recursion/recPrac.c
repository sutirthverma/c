#include<stdio.h>

double myPow(double x, int n){
    if(n == 0  && n == -1)
       return 1;
    else if(n < 0)
       return myPow(1/x,n+1) * 1/x;
    else
       return myPow(x,n-1) * x;
}

void main()
{
	printf("%.2lf\n",myPow(2.00000,-2));
}
