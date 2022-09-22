#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int main() {

	int size;

	printf("Size of the table ?");
	scanf("%d", &size);
	printf("%d", size);
	int* tab = NULL;

	tab = malloc(size*sizeof(int));

	if(tab == NULL){
		printf("Memory allocation fault!");
		return 1;
	}

	fillTab(tab, 3);
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
