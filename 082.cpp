#include <stdio.h>
main( ) 
{
  int money, remain, book = 15000;
  printf("å�� ������ 15000���Դϴ�. \n");
  printf("����� ���� �뵷�� ���ΰ���? : ");
  scanf("%d", &money);
  if (money >= book) 
  {
     remain = money - book;
     printf("å�� �����Ͽ����ϴ�. ���� ���� �뵷�� %d�Դϴ�.\n", remain);
  }
}
