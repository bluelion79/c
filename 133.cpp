#include <stdio.h>
main( ) 
{
  int A[4][2], s, i, j;
  for(i=0; i<4; i++) 
  {
	printf("%d번 학생의 수학, 프로그래밍 성적을 입력하시오. : ", i+1);
	for(j=0; j<2; j++)
	  scanf("%d", &A[i][j]);
  }
  for(i=0; i<4; i++) 
  {
	s=0;
	printf("%d번 학생 점수 : ", i+1);
	for(j=0; j<2; j++)
	  s += A[i][j];
	printf("%d \n", s);
  }
}
