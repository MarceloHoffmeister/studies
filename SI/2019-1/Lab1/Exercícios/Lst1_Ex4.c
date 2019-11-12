#include <stdio.h>
#include <stdlib.h>

int main()
{
	float base, alt;

	printf("Informe o tamanho da base: ");
	scanf("%f", &base);

	printf("Informe o tamanho da alt: ");
	scanf("%f", &alt);

	printf("A área do terreno é de: %f\n", base * alt);

	return 0;
}