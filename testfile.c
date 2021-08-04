#include <stdio.h>
#include <stdlib.h>

int swap(int *a, int *b) {
  *a = *a + *b;
  *b = *a - *b;
  *a = 2;
  *a = *a - *b;
}

int main(int argc, char **argv) {
  printf("Good Bye\n");

  // char *random_string = "asd";
  // 2 [random_string] = 'c';


  int x = 7;
  int y = 7;
  
  int x = 6;
  int y = 9;

  swap(&x, &y);

  char str[3];
  sprintf(str, "%d%d", x, y);

  char best = strtol(str, NULL, 16);
  printf("The best character is `%c`\n", best);

  return 0;
}