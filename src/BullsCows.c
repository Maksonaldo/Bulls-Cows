#include "BullsCows"
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