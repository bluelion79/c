#include <stdio.h>
int f(int n)
{
  int i, sum = 0;
  for(i=1; i<=n; i++)
    sum+=i;
  return sum;
}
main( )
{
  printf("%d", f(f(4)));
}

