#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dMaior, dMenor;
	float area;

	printf("Informe o tamanho da diagonal maior: ");
	scanf("%d", &dMaior);

	printf("Informe o tamanho da diagonal menor: ");
	scanf("%d", &dMenor);

	area = (dMaior * dMenor) / 2;

	printf("A área do losango é de: %f\n", area);

	return 0;
}