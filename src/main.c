#include "BullsCows.h"
//#include "BullsCows.c"


int main() {
  system("clear");
  Hello();
  
  int n = 4;

  char mass[n];
  char mass2[n];

  game(mass, mass2, n);
  return 0;
}