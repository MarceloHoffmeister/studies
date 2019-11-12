#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, n;

	for (i = 1; i <= 10; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);

		printf("Metade de %d = %.1f\n", n, n/2.0);
		
	}

	return 0;
}