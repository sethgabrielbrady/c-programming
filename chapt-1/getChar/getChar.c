#include <stdio.h>
/* copy input to output; 1st version */
 main() {
  int c;
  c = getchar();
  while (c != EOF) {
    printf("EOF1 equals %d\n", EOF );
    putchar(c);
    c = getchar();
  }
 }


