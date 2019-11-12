#include <stdio.h>
#include <stdlib.h>

int main()
{
	int lado;
	float area;

	printf("Informe o tamanho da lateral: ");
	scanf("%d", &lado);

	area = lado * lado;

	printf("A área do quadrado é de: %f\n", area);

	return 0;
}