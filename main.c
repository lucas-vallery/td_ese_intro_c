#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int main() {

	int size = 0;
	char temp;
	int* tab = NULL;
	FILE *fptr = NULL;

	fptr = fopen("./tab.txt", "r");
	if(fptr == NULL){
		printf("No file found !");
		return 1;
	}

	for(temp = getc(fptr); temp =! EOF; temp = getc(fptr)){
		if(temp == "\n");
			size++;
	}

	tab = malloc(size*sizeof(int));
	if(tab == NULL){
		printf("Memory allocation error !");
		return 1;
	}

	fillTab(tab, size);

	tabMax(tab, size);
	tabMin(tab, size);


	free(tab);
	return 0;
}
