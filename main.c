#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int main() {

	int size;

	printf("Quelle taille pour votre tableau ?");
	scanf("%d", &size);
	int* tab = NULL;
	tab = malloc(size*sizeof(int));

	fillTab(tab, size-1);
	/*
	printf("%d pour le max \n", tabMax(tab));
	printf("%d pour le min \n", tabMin(tab));

	bubbleSort(tab);
	printTab(tab);

	printf("%p", &tab);
	*/

	printf("%ld", sizeof(tab)/sizeof(int));

	free(tab);

	return 0;
}
