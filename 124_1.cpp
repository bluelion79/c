#include <stdio.h>
main( ) 
{
  int k, sum = 0;

  for (k = 1; k <= 1000; k++) 
  {
	if (k % 3 == 0)
	  sum += k;
  }
  /*
  k = 1;
  while ( k <= 1000 )
  {
    if (k % 3 == 0)
      sum += k;
 		k++;
  }
  */

  printf("гую╨ = %d", sum);
}

