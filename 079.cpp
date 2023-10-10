#include <stdio.h>
#include <time.h> // time( )을 사용하기 위한 헤더 파일
#include <stdlib.h> // rand( )를 사용하기 위한 헤더 파일
main( )
{
  int a, b, num;
  srand(time(NULL)); // 시간에 따른 난수표 선택
  // srand( )를 통해 매번 동일한 난수를 발생시키지 못하게 함 
  printf("***번호 뽑기 프로그램***\n");
  printf("번호의 범위를 입력하세요(시작번호, 마지막번호) : ");
  scanf("%d %d", &a, &b);
  // rand( )는 0부터 32767 사이의 무작위 수를 발생시키는 함수 
  num = rand() % (b-a+1) + a; // a~b 범위를 추출하기 위한 수식 
  printf("축하합니다! 뽑힌 번호는 %d입니다!\n", num);
}
