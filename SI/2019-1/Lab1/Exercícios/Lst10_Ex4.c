#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10], i, j = 1;

	for (i = 0; i < 10; i++) {

		printf("Digite uma valor para essa posição: ");
		scanf("%d", &a[i]);

	}

	for (i = 0; i < 10; i++) {

		if (a[i] < 0) {

			a[i] = 0;
			
		}

		printf("Posição do vetor [%d] ", i);
		printf("Número na posição [%d]\n", a[i]);

	}

	return 0;
}