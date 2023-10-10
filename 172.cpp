#include <stdio.h>
struct student {
  int id;
  char name[10];
  double score;
} s1 = {1101, "Lee", 95.3};
main( ) 
{
  struct student s2 = {1102, "Kim"};
  s2.score = 91.8;
  printf("%d %s %.1lf\n", s1.id, s1.name, s1.score);
  printf("%d %s %.1lf\n", s2.id, s2.name, s2.score);
}
