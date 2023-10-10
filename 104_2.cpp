#include <stdio.h>
main()
{
  int a=5, b=7, c=3, d=0;
  if (a > b) d = a;
  else d = b;
  if (d > c) d = b;
  else d = c;
  printf("%d", d);
}
