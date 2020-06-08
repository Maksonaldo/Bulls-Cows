#include "BullsCows.h"
#include <stdio.h>
bool no_same_digits(char mass[], int n){
	int count=0;
	int i,j;
	for (i=0; i<n; i++){
		for (j=i+1; j<n; j++){
			if (mass[i]== mass[j]){
				count++;
			}
		}
	}
	//printf ("\n%d", count);
	return (count != 0);
}

void location(char mass[], char mass2[], int n){
	int bik=0;
	int i,j, k=0;
	int corova=0,hod=0;
	char input;
	
	
	printf ("Введите четыре символа которое вы считаете верным: ");
	scanf("%s", mass2);
	for (int i=0; i<mass2[i]; i++){
		k++;//количество цифр в числе
	}
	//printf ("k = %d", k);
	if (k==4){
		
	
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			if (mass[i]==mass2[j]){
				if (i==j){
					bik++;
				}else{
					corova++;
				}

			}

		}

	}
	
	printf ("\n");
	printf ("****************************\n****bull = %d cow = %d ()****\n****************************\n", bik, corova); 
	printf ("\n");
}else{
	printf("Вы должны ввести только 4 символа, попробуйте ещё раз\n");
		hod++;
		return location(mass,mass2,n);

}