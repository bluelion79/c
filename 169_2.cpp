#include <stdio.h>
int f(int n)
{
  if(n == 1)
	return 1;
  else
	return f(n-1) + n;
}
main( )
{
  int n = 20;
  printf("%d\n", f(n));
}
