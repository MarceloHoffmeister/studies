#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10], i, j = 1;

	for (i = 0; i < 10; i++) {

		a[i] = i + j;
		j++;

	}

	for (i = 0; i < 10; i++) {

		printf("Posição do vetor [%d] ", i);
		printf("Número na posição [%d]\n", a[i]);

	}

	return 0;
}