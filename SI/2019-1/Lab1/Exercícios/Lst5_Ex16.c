#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, n;

	for (i = 1; i <= 15; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);

		printf("Raíz de %d = %.1f\n", n, sqrt(n));
		
	}

	return 0;
}