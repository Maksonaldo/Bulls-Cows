#include "BullsCows.h"
#include <stdio.h>

void Hello() 
{
  	printf("\t\t\t***************************\n");
  	printf("\t\t\t***************************\n");
  	printf("\t\t\t*******БЫКИ и КОРОВЫ*******\n");
  	printf("\t\t\t***************************\n");
  	printf("\t\t\t***************************\n");
  	printf("\t\t\t***************************\n");
	printf("\n");
}

void rand_om(char mass[], int n) {
  srand(time(NULL));
  int i;
  for (i = 0; i < n; i++) {
    mass[i] = rand() % 9 + '0';
  }
}

bool no_same_digits(char mass[], int n) {
  int count = 0;
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (mass[i] == mass[j]) {
        count++;
      }
    }
  }
  // printf ("\n%d", count);
  return (count != 0);
}

void location(char mass[], char mass2[], int n) {
  int bik = 0;
  int i, j, k = 0;
  int corova = 0, hod = 0;
  char input;

  printf("Введите четыре символа которое вы считаете верным: ");
  scanf("%s", mass2);
  for (int i = 0; i < mass2[i]; i++) {
    k++; //количество цифр в числе
  }
  // printf ("k = %d", k);
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

    printf("\n");
    printf("****************************\n****bull = %d cow = %d "
           "()****\n****************************\n",
           bik, corova);
    printf("\n");
  } else {
    printf("Вы должны ввести только 4 символа, попробуйте ещё раз\n");
    hod++;
    return location(mass, mass2, n);
  }
  while (1) { //если 4 быка игра заканчивается

    if (bik == 4) {

      scanf("%c", &input);
      printf("Поздравляю, вы победили!!! n продолжить играть\n");
      scanf("%c", &input);
      switch (input) {

      case 'n':
        return game(mass, mass2, n);
        break;
      default:
        exit(0);
      }

      // return 1;
    } else {

      return location(mass, mass2, n);
    }
  }
}

void game(char mass[], char mass2[], int n) {
  printf("1.Выберите режим игры: компьютер загадывает число / 2.человек "
         "загыдывет (число || буквы) [1/2]");
  int input;

  scanf("%d", &input);
  switch (input) {
  case 1:
    do { //генерация не одинаковых чиселы
      rand_om(mass, n);
      // print_mass(mass,n);
    } while (no_same_digits(mass, n));
    printf("Компьютер загодал символы:");
    print_mass(mass, n);
    printf("\n");
    // scanf("%s", mass2);

    location(mass, mass2, n);
    break;
  case 2:
    printf("Загодайте символ: ");
    scanf("%s", mass);
    print_mass(mass, n);
    printf("\n");
    // scanf("%s", mass2);

    location(mass, mass2, n);
    break;

  default:
    printf("Неправильный ввод.\n");
    return game(mass, mass2, n);
  }
}

void print_mass(char mass[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%c", mass[i]);
  }
}
