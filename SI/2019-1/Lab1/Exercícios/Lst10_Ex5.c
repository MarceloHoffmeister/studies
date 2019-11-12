#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[10], i, j = 0;

	for (i = 0; i < 10; i++) {

		printf("Digite uma valor para essa posição: ");
		scanf("%d", &a[i]);

	}

	for (i = 0; i < 10; i++) {

		if (a[i] % 2 == 0) {

			j++;
			
		}

	}

	printf("O vetor possui %d valores pares\n", j);

	return 0;
}