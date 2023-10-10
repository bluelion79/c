#include <stdio.h>
main( ) 
{
  int i, sum = 0;
  for (i = 1; i <= 100; i++) 
  {
	printf("%d ", i);
	sum += i;
  }
  printf(" \n1~100까지 합은 %d입니다.\n", sum);
}
