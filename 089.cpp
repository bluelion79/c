#include <stdio.h>
main( ) 
{
  int score;
  printf("������ ������ �Է��ϼ��� : ");
  scanf("%d", &score);
  if (score >= 90) printf("��\n");
  else if (score >= 80) printf("��\n");
  else if (score >= 70) printf("��\n");
  else if (score >= 60) printf("��\n");
  else printf("��\n");
}
