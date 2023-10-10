#include <stdio.h>
main( ) 
{
  int score1, score2;
  printf("1과목의 점수를 입력하세요 : ");
  scanf("%d", &score1);
  printf("2과목의 점수를 입력하세요 : ");
  scanf("%d", &score2);
  if (score1 >= 60) 
  {
    if (score2 >= 60)
      printf("합격\n");
    else
      printf("불합격\n");
  } 
  else
    printf("불합격\n");
}
