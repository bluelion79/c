#include <stdio.h>
main( ) 
{
  double a, b, c;
  int d, e, f;
  double score;
  printf("*** ���� ���� ��� ���α׷� ***\n");
  printf("�߰���� �ݿ�����/���� ������ �Է��ϼ��� : ");
  scanf("%lf %d", &a, &d);
  printf("�⸻��� �ݿ�����/���� ������ �Է��ϼ��� : ");
  scanf("%lf %d", &b, &e);
  printf("������ �ݿ�����/���� ������ �Է��ϼ��� : ");
  scanf("%lf %d", &c, &f);
  score = a * d + b * e + c * f;
  printf("������ %.1lf�Դϴ�.\n", score);
}
