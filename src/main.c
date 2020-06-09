#include "BullsCows.h"
//#include "BullsCows.c"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  Hello();
  int n = 4;

  char mass[n];
  char mass2[n];

  game(mass, mass2, n);
  return 0;
}
