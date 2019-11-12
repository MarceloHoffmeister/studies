#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, n = 0;

	for(i = 1; i <= 4; i++) {

		printf("Escolha o %dº número: ", i);
		scanf("%d", &n);
		printf("Cubo: %.2f, Raíz cúbica: %.2f\n", pow(n, 3), pow(n, 1.0/3));

	}

	return 0;
}