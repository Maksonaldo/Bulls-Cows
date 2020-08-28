#include "BullsCows.h"
#include "ctest.h"

int test_b(char mass[], char mass2[], int n) {
  int bik = 0;
  int i, j, k = 0;
  int corova = 0;

  for (int i = 0; i < mass2[i]; i++) {
    k++; //количество цифр в числе
  }

  if (k == 4) {

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (mass[i] == mass2[j]) {
          if (i == j) {
            bik++;
          } else {
            corova++;
          }
        }
      }
    }
  }
  return bik;
}
int test_c(char mass[], char mass2[], int n) {
  int bik = 0;
  int i, j, k = 0;
  int corova = 0;

  for (int i = 0; i < mass2[i]; i++) {
    k++;
  }

  if (k == 4) {

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (mass[i] == mass2[j]) {
          if (i == j) {
            bik++;
          } else {
            corova++;
          }
        }
      }
    }
  }

  return corova;
}
int test_BullsCows(char mass[], char mass2[], int n) {
  int bik = 0;
  int i, j, k = 0;
  int corova = 0;

  for (int i = 0; i < mass2[i]; i++) {
    k++; //количество цифр в числе
  }
  // printf ("k = %d", k)s;
  if (k == 4) {

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (mass[i] == mass2[j]) {
          if (i == j) {
            bik++;
          } else {
            corova++;
          }
        }
      }
    }
  }
  return bik + corova;
}

CTEST(4_bulls, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 2;
  mass[2] = 3;
  mass[3] = 4;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int bulls = 4;
  ASSERT_EQUAL(bulls, test_b(mass, mass2, n));
}
CTEST(3_bulls, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 9;
  mass[1] = 2;
  mass[2] = 3;
  mass[3] = 4;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int bulls = 3;

  ASSERT_EQUAL(bulls, test_b(mass, mass2, n));
}
CTEST(2_bulls, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 2;
  mass[2] = 3;
  mass[3] = 4;
  mass2[0] = 2;
  mass2[1] = 3;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int bulls = 2;

  ASSERT_EQUAL(bulls, test_b(mass, mass2, n));
}
CTEST(1_bulls, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 2;
  mass[2] = 3;
  mass[3] = 4;
  mass2[0] = 2;
  mass2[1] = 3;
  mass2[2] = 3;
  mass2[3] = 6;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int bulls = 1;

  ASSERT_EQUAL(bulls, test_b(mass, mass2, n));
}
CTEST(0_bulls, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 2;
  mass[2] = 3;
  mass[3] = 4;
  mass2[0] = 3;
  mass2[1] = 3;
  mass2[2] = 1;
  mass2[3] = 0;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int bulls = 0;

  ASSERT_EQUAL(bulls, test_b(mass, mass2, n));
}

CTEST(4_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 4;
  mass[1] = 3;
  mass[2] = 2;
  mass[3] = 1;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int cows = 4;

  ASSERT_EQUAL(cows, test_c(mass, mass2, n));
}
CTEST(3_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 4;
  mass[1] = 3;
  mass[2] = 2;
  mass[3] = 1;
  mass2[0] = 6;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int cows = 3;

  ASSERT_EQUAL(cows, test_c(mass, mass2, n));
}
CTEST(2_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 4;
  mass[1] = 3;
  mass[2] = 2;
  mass[3] = 1;
  mass2[0] = 6;
  mass2[1] = 7;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int cows = 2;

  ASSERT_EQUAL(cows, test_c(mass, mass2, n));
}

CTEST(1_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 4;
  mass[1] = 3;
  mass[2] = 2;
  mass[3] = 1;
  mass2[0] = 6;
  mass2[1] = 9;
  mass2[2] = 5;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int cows = 1;

  ASSERT_EQUAL(cows, test_c(mass, mass2, n));
}

CTEST(0_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 4;
  mass[1] = 3;
  mass[2] = 2;
  mass[3] = 1;
  mass2[0] = 6;
  mass2[1] = 8;
  mass2[2] = 7;
  mass2[3] = 5;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int cows = 0;

  ASSERT_EQUAL(cows, test_c(mass, mass2, n));
}

CTEST(2_bulls_2_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 2;
  mass[2] = 4;
  mass[3] = 3;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int BullsCows = 4;

  ASSERT_EQUAL(BullsCows, test_BullsCows(mass, mass2, n));
}

CTEST(1_bulls_2_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 8;
  mass[2] = 4;
  mass[3] = 3;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int BullsCows = 3;

  ASSERT_EQUAL(BullsCows, test_BullsCows(mass, mass2, n));
}
CTEST(1_bulls_1_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 1;
  mass[1] = 8;
  mass[2] = 4;
  mass[3] = 5;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int BullsCows = 2;

  ASSERT_EQUAL(BullsCows, test_BullsCows(mass, mass2, n));
}

CTEST(0_bulls_0_cows, check)

{

  int n = 4;

  char mass[n];
  char mass2[n];
  mass[0] = 6;
  mass[1] = 8;
  mass[2] = 7;
  mass[3] = 5;
  mass2[0] = 1;
  mass2[1] = 2;
  mass2[2] = 3;
  mass2[3] = 4;

  for (int i = 0; i < n; ++i) {
  }
  for (int i = 0; i < n; ++i) {
  }

  int BullsCows = 0;

  ASSERT_EQUAL(BullsCows, test_BullsCows(mass, mass2, n));
}
