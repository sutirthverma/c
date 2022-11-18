#include<stdio.h>

int fun(int n)
{
 static int x;
 if(n > 0)
 {
  x++;
  return fun(n-1) + x;
 }
 return 0;
}

void main()
{
 int x = 5;
 int retrn = fun(x);
 printf("%d\n ",retrn);
}
