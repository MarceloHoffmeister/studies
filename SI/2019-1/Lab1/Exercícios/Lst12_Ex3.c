#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[5][5], resp[2] = {-1, -2}, i, j, val = 0;

	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {

			printf("Digite um valor para a posição [%d][%d] da matriz A: ", i, j);
			scanf("%d", &A[i][j]);

		}

	}

	printf("\nEscreva o valor que deseja procurar na matriz: ");
	scanf("%d", &val);
	printf("\n");

	for (i = 0; i < 5; i++) {
		
		for (j = 0; j < 5; j++) {

			printf("%d ", A[i][j]);

			if (A[i][j] == val) {

				resp[0] = i+1;
				resp[1] = j+1;

			}

		}

		printf("\n");

	}

	if (resp[0] != -1 && resp[1] != -2) {

		printf("\nO valor %d foi encontrado na matriz na posição [%d][%d]\n", val, resp[i], resp[j]);
			
	} else {

		printf("\nO valor %d não foi encontrado na matriz!\n", val);

	}

	return 0;
}