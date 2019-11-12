#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[5][3], i, j, maior, menor;

	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 3; j++) {

			printf("Digite um valor para a posição [%d][%d] da matriz A: ", i, j);
			scanf("%d", &A[i][j]);

            menor = A[0][0];
            maior = A[0][0];

           	if (A[i][j] < menor) {

           		menor = A[i][j];

           	} else {

           		maior = A[i][j];

           	}

		}

	}

	printf("O menor valor para essa matriz é: %d - O maior valor é: %d\n", menor, maior);

	return 0;
}