#include <stdio.h>
main( ) 
{
  int a, b, c;
  printf("�� �ͳ��� ���̸� ���ʴ�� �Է��ϼ��� : ");
  scanf("%d %d %d", &a, &b, &c);
  if (a <= 170)
	printf("�浹 %d", a);
  else if (b <= 170)
	printf("�浹 %d", b);
  else if (c <= 170)
	printf("�浹 %d", c);
  else
	printf("���� ���");
}
