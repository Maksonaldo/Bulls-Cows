#include "ctest.h"
#include "BullsCows.h"



int test_b(char mass[], char mass2[], int n) {
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
  //return bik;
  return bik;
 
  } 


CTEST(4_bulls, check)

{

int n = 4;

char mass[n];
char mass2[n];
mass[0]=1;
mass[1]=2;
mass[2]=3;
mass[3]=4;
mass2[0]=1;
mass2[1]=2;
mass2[2]=3;
mass2[3]=4;
//int a = b(mass,mass2,n);
//printf("%d", a);
for (int i = 0; i < n; ++i)
{
  //  printf("%d", mass[i]);
}
for (int i = 0; i < n; ++i)
{
   // printf("%d", mass2[j]);
}
int bulls=4;
ASSERT_EQUAL(bulls,test_b(mass,mass2,n));
}
CTEST(3_bulls, check)

{

int n = 4;

char mass[n];
char mass2[n];
mass[0]=9;
mass[1]=2;
mass[2]=3;
mass[3]=4;
mass2[0]=1;
mass2[1]=2;
mass2[2]=3;
mass2[3]=4;
//int a = b(mass,mass2,n);
//printf("%d", a);
for (int i = 0; i < n; ++i)
{
  //  printf("%d", mass[i]);
}
for (int i = 0; i < n; ++i)
{
   // printf("%d", mass2[j]);
}



int bulls=3;



  ASSERT_EQUAL(bulls,test_b(mass,mass2,n));




}
CTEST(2_bulls, check)

{

int n = 4;

char mass[n];
char mass2[n];
mass[0]=1;
mass[1]=2;
mass[2]=3;
mass[3]=4;
mass2[0]=2;
mass2[1]=3;
mass2[2]=3;
mass2[3]=4;
//int a = b(mass,mass2,n);
//printf("%d", a);
for (int i = 0; i < n; ++i)
{
  //  printf("%d", mass[i]);
}
for (int i = 0; i < n; ++i)
{
   // printf("%d", mass2[j]);
}



int bulls=2;



  ASSERT_EQUAL(bulls,test_b(mass,mass2,n));

}
CTEST(1_bulls, check)

{

int n = 4;

char mass[n];
char mass2[n];
mass[0]=1;
mass[1]=2;
mass[2]=3;
mass[3]=4;
mass2[0]=2;
mass2[1]=3;
mass2[2]=3;
mass2[3]=6;
//int a = b(mass,mass2,n);
//printf("%d", a);
for (int i = 0; i < n; ++i)
{
  //  printf("%d", mass[i]);
}
for (int i = 0; i < n; ++i)
{
   // printf("%d", mass2[j]);
}



int bulls=1;



  ASSERT_EQUAL(bulls,test_b(mass,mass2,n));
}
CTEST(0_bulls, check)

{

int n = 4;

char mass[n];
char mass2[n];
mass[0]=1;
mass[1]=2;
mass[2]=3;
mass[3]=4;
mass2[0]=3;
mass2[1]=3;
mass2[2]=1;
mass2[3]=0;
//int a = b(mass,mass2,n);
//printf("%d", a);
for (int i = 0; i < n; ++i)
{
  //  printf("%d", mass[i]);
}
for (int i = 0; i < n; ++i)
{
   // printf("%d", mass2[j]);
}



int bulls=0;



  ASSERT_EQUAL(bulls,test_b(mass,mass2,n));
  }

