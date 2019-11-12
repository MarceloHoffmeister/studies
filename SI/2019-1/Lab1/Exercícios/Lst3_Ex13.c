#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n;

	printf("Digite um número diferente de zero: ");
	scanf("%d", &n);

	if (n == 0) { printf("Digite um número diferente de zero!"); }

	if (n > 0) {

		printf("Número maior que zero. A raíz quadrada de %d é %.1f\n", n, sqrt(n));

	} else {

		printf("Número menor que zero. O quadrado de %d é %.1f\n", n, pow(n, 2));		

	}

	return 0;
}