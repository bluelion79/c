#include <stdio.h>
main( ) 
{
  int i, j;
  for (i = 1; i <= 9; i++) 
  {
	for (j = 1; j <= 9; j++)
      printf("%d * %d = %d\n", i, j, i * j);
	printf("\n"); // 단과 단 사이 한 줄 더 띄우기
  }
}

