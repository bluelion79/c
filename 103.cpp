#include <stdio.h>
main() 
{
  int hour, min;
  printf("�ð��� ���� �Է��ϼ��� : ");
  scanf("%d %d", &hour, &min);
  printf("�Է��� �ð��� 30�� �� �ð��� ");
  if( min >= 30 )
	printf("%d�� %d��\n", hour, min-30);
  else 
  {
	if(hour == 0)
      printf("%d�� %d��\n", 23, min+30);
	else
      printf("%d�� %d��\n", hour-1, min+30);
  }
}
