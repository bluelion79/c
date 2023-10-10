#include <stdio.h>
#include <string.h>
struct student {
  int id;
  char name[10];
  double score;
} class1[30];
main( ) 
{
  class1[0].id = 1101;
  strcpy(class1[0].name, "Lee");
  class1[0].score = 95.3;
  class1[1].id = 1102;
  strcpy(class1[1].name, "Kim");
  class1[1].score = 91.8;
  printf("%d %s %.1lf\n", class1[0].id, class1[0].name, class1[0].score);
  printf("%d %s %.1lf\n", class1[1].id, class1[1].name, class1[1].score);
}
