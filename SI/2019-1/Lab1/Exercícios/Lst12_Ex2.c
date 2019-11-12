#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[4][4], i, j, c = 0;

	for (i = 0; i < 4; i++) {
		
		for (j = 0; j < 4; j++) {

			printf("Digite um valor para a posição [%d][%d] da matriz A: ", i, j);
			scanf("%d", &A[i][j]);

			if (A[i][j] > 10) c++;

		}

	}

	printf("A matriz possui %d valores maiores que 10\n", c);

	return 0;
}