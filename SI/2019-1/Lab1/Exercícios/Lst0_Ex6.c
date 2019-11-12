#include <stdio.h>
#include <stdlib.h>

int main()
{
	int bMaior, bMenor, alt;
	float area;

	printf("Informe o tamanho da base maior: ");
	scanf("%d", &bMaior);

	printf("Informe o tamanho da base menor: ");
	scanf("%d", &bMenor);

	printf("Informe a altura: ");
	scanf("%d", &alt);

	area = ((bMaior + bMenor) * alt) / 2;

	printf("A área do trapézio é de: %f\n", area);

	return 0;
}