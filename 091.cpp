#include <stdio.h>
main( )
{
  int score1, score2, score3;
  printf("�� ������ �������� �и��ؼ� �Է��ϼ���: ");
  scanf("%d %d %d", &score1, &score2, &score3);
  if (score1 >= score2 && score1 >= score3)
    printf("%d\n", score1);
  else if (score2 >= score1 && score2 >= score3)
    printf("%d\n", score2);
  else
    printf("%d\n", score3);
}
