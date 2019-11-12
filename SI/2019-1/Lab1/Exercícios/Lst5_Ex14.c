#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n, maior = 0, menor = 0;

	printf("Escolha o 1º número: ");
	scanf("%d", &n);

	maior = n;
	menor = n;

	for (i = 2; i <= 5; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);

		if (n > maior) maior = n;
		if (n < menor) menor = n;
		
	}

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);

	return 0;
}