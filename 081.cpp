#include <stdio.h>
main( )
{
  int i = -10;
  unsigned int ui = 10;
  long long ll = 2147483648;
  float f = 3.14;
  printf("%d %u\n", i, i);
  printf("%u %f\n", ui, ui);
  printf("%lld %d\n", ll, ll);
  printf("%f %d\n", f, f);
}
