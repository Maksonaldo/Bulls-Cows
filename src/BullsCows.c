#include "BullsCows"
#include <stdio.h>

void Hello() {
  printf("***************************\n");
  printf("***************************\n");
  printf("*******БЫКИ и КОРОВЫ*******\n");
  printf("***************************\n");
  printf("***************************\n");
  printf("***************************\n");
  printf("\n");
}

void print_mass(char mass[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%c", mass[i]);
  }
}

void rand_om(char mass[], int n) {
  srand(time(NULL));
  int i;
  for (i = 0; i < n; i++) {
    mass[i] = rand() % 9 + '0';
  }
}
