#include <stdio.h>
#include <stdlib.h>

int main()
{
	int v[15], i;

	for (i = 0; i < 15; i++) {

		printf("Digite um número inteiro: ");
		scanf("%d", &v[i]);

	}

	for (i = 14; i > 0; i--) {

		printf("Posição do vetor [%d] ", i);
		printf("Número na posição [%d]\n", v[i]);
	}

	return 0;
}