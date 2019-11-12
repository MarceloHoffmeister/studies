#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[5][5], B[5][5], i, j;

	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {

			printf("Digite um valor para a posição [%d][%d] da matriz A: ", i, j);
			scanf("%d", &A[i][j]);

			B[i][j] = A[i][j] * A[i][j];

		}

	}


	printf("Resultado da matriz B\n");

	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {

			printf("%d ", B[i][j]);

		}

		printf("\n");

	}

	return 0;
}