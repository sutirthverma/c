#include<stdio.h>

int fun(int n)
{
 if(n>0)
 {
  return fun(n - 1) + n;
 }
return 0;
}

void main()
{
 int x = 5;
 printf("%d\n",fun(x));
}
