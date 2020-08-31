#include "BullsCows.h"
#include <stdio.h>

void Hello() {
  printf("\t\t\t***************************\n");
  printf("\t\t\t***************************\n");
  printf("\t\t\t*******БЫКИ и КОРОВЫ*******\n");
  printf("\t\t\t***************************\n");
  printf("\t\t\t***************************\n");
  printf("\t\t\t***************************\n");
  printf("Быки и коровы - логическая игра для двоих игроков. В игре принимает "
         "участие два человека, каждый из которых в начале игры загадывает 4-х "
         "значное число. Цифры в загаданном числе не должны повторяться. "
         "Противники по очереди пытаются отгадать число оппонента, задавая "
         "вопрос в таком же формате 4-х значного числа. Противник в ответе "
         "должен указать количество быков и коров. Бык - это угаданная цифра "
         "на правильной позиции, а корова- это правильная цифра , но не на "
         "своей позиции. Игра продолжается до тех пор, пока пользователь не "
         "введёт вариант, в котором ведённое число полностью совпадает с "
         "загаданным\n");
  printf("\n");
  printf("Мы предстовляем вашему вниманию 2 режима игры:\n");
  printf("*Первый режим: игрок угадывает число которое загадал компьютер.\n");
  printf("*Второй режим: первый игрок загадывает четырехзначное число, а "
         "второй игрок пытается его отгадать.\n");
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

void location(char mass[], char mass2[], int n, int *cout) {
  int bik = 0;
  int i, j, k = 0;
  int corova = 0;
  char input;

  printf("Введите четыре символа которое вы считаете верным: ");
  scanf("%s", mass2);
  for (int i = 0; i < mass2[i]; i++) {
    k++; //количество цифр в числе
  }
  //
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
    // hod++;
    system("clear");
    (*cout)++;
    printf("Вы ввели:");
    print_mass(mass2, n);
    printf("\n");
    printf("\n");
    printf("****************************\n****bull = %d cow = %d "
           "(%d)****\n****************************\n",
           bik, corova, *cout);
    printf("\n");
  } else {
    system("clear");
    printf("Вы должны ввести только 4 символа, попробуйте ещё раз\n");
    // hod++;
    return location(mass, mass2, n, cout);
  }
  while (1) { //если 4 быка игра заканчивается

    if (bik == 4) {

      scanf("%c", &input);
      printf("Поздравляю, вы победили!!! [n] продолжить играть\n");
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

      return location(mass, mass2, n, cout);
    }
  }
}

void game(char mass[], char mass2[], int n) {
  printf("1.Выберите режим игры: компьютер загадывает число / 2.Человек "
         "загыдывет (число или буквы) [1/2]");
  int input, cout = 0;

  scanf("%d", &input);
  system("clear");
  switch (input) {
  case 1:
    do { //генерация не одинаковых чиселы
      rand_om(mass, n);
      // print_mass(mass,n);
    } while (no_same_digits(mass, n));
    printf("Компьютер загодал символы:");
    // print_mass(mass, n);
    printf("\n");
    // scanf("%s", mass2);
    system("clear");
    location(mass, mass2, n, &cout);

    break;
  case 2:
    printf("Загодайте символ: ");
    scanf("%s", mass);
    system("clear");
    // print_mass(mass, n);
    // printf("\n");
    // scanf("%s", mass2);

    location(mass, mass2, n, &cout);

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
