#include "BullsCows"
#include <stdio.h>
void print_mass(char mass[], int n){
	int i;
	for (i=0; i<n; i++){
    	printf("%c", mass[i]);
    }


}

void rand_om(char mass[], int n){
	srand(time(NULL));
	int i;
    for (i = 0; i < n; i++) {
        mass[i] = rand() % 9 +'0';
 
    }
}