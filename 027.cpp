#include <stdio.h>
main( ) 
{
  int n, i, t, sum=0;
  printf("������ ����? : ");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    printf("%d��° ����? : ", i);
    scanf("%d", &t);
    sum=sum+t;
  }
  printf("�� : %d\n", sum);
  printf("��� : %f\n", (float)sum/n);
  return 0;
}
