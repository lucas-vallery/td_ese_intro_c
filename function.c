#include "function.h"

void printTab(int* tab){
	int i;

	for(i = 0; i < TAB_SIZE; i++) {
		printf("%d\n", tab[i]);
	}
}

void fillTab(int* tab, int size) {
	int i;
	for(i = 0; i < size; i++){
		int x = 100;
		while(x > 99){
			x = rand();
		}
		tab[i] = x;
		printf("%d\n", tab[i]);
	}
}

int tabMax (int* tab) {
	int i;
	int m = 0;
	int indice;

	for(i = 0; i < TAB_SIZE; i++) {
		if(tab[i] > m) {
			m = tab[i];
			indice = i;
		}
	}
	printf("position %d = ", indice);
	return m;
}

int tabMin (int* tab) {
	int i;
	int m = 100;
	int indice;

	for(i = 0; i < TAB_SIZE; i++) {
		if(tab[i] < m) {
			m = tab[i];
			indice = i;
		}
	}
	printf("position %d = ", indice);
	return m;
}

void bubbleSort(int* tab) {
	int i, j, temp;

	for(i = 0; i < TAB_SIZE; i++) {
		for(j = i + 1; j < TAB_SIZE; j++) {
			if(tab[i] > tab[j]) {
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}


