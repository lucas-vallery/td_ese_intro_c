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
		#ifdef OPTION_CONSOLE_DEBUG
			printf("%d\n", tab[i]);
		#endif
	}
}

int tabMax (int* tab, int size) {
	int i;
	int m = 0;
	int indice;

	for(i = 0; i < size; i++) {
		if(tab[i] > m) {
			m = tab[i];
			indice = i;
		}
	}
	#ifdef OPTION_CONSOLE_DEBUG
		printf("max = tab[%d] = %d\n", indice, m);
	#endif
	return m;
}

int tabMin (int* tab, int size) {
	int i;
	int m = 100;
	int indice;

	for(i = 0; i < size; i++) {
		if(tab[i] < m) {
			m = tab[i];
			indice = i;
		}
	}
	#ifdef OPTION_CONSOLE_DEBUG
		printf("min = tab[%d] = %d\n", indice, m);
	#endif
	return m;
}

void bubbleSort(int* tab, int size) {
	int i, j, temp;

	for(i = 0; i < size; i++) {
		for(j = i + 1; j < size; j++) {
			if(tab[i] > tab[j]) {
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}


