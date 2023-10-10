#include <stdio.h>
main( )
{
  int score1, score2, score3;
  printf("세 점수를 공백으로 분리해서 입력하세요: ");
  scanf("%d %d %d", &score1, &score2, &score3);
  if (score1 >= score2 && score1 >= score3)
    printf("%d\n", score1);
  else if (score2 >= score1 && score2 >= score3)
    printf("%d\n", score2);
  else
    printf("%d\n", score3);
}
