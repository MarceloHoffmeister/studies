#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y, z;

	printf("Digite o primeiro número: ");
	scanf("%d", &x);

	printf("Digite o segundo número: ");
	scanf("%d", &y);

	printf("Digite o terceiro número: ");
	scanf("%d", &z);

	//printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", y, z x);

	if (x == y || x == z || y == z) {
	
		printf("\nEscolha números diferentes!\n");

	} else {

		if (x > y && x > z) {

			if (z > y) {
				
				printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", x, z, y);

			} else {

				printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", x, y, z);

			}
		}

		if (y > x && y > z) {

			if (z > x) {
				
				printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", y, z, x);

			} else {

				printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", y, x, z);

			}
		}

		if (z > x && z > y) {

			if (y > x) {
				
				printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", z, y, x);

			} else {

				printf("Maior: %d\nIntermediário: %d\nMenor: %d\n", z, x, y);

			}
		}
	}

	return 0;
}