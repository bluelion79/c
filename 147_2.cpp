#include <stdio.h>
main( ) 
{
  int *p;
  int a = 10, b = 20;
  p = &a;
  p = &b;
  printf("%d", a + b + (*p));
}

