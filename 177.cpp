#include <stdio.h>
struct STUDENT{
  int no, inf, mat;
  int sum;
  double avg;
};
main( )
{
  int n;
  STUDENT s[100];
  scanf("%d", &n);
  for(int i = 0 ; i < n ; i++ )
	scanf("%d %d %d", &s[i].no, &s[i].inf, &s[i].mat);
  for(int i = 0 ; i < n ; i++ )
  {
    s[i].sum = s[i].mat + s[i].inf;
	  s[i].avg = s[i].sum / 2.0;
  }
    for(int i = 0; i < n; i++ )
      printf("%04d %d %.1f\n", s[i].no, s[i].sum, s[i].avg);
}
