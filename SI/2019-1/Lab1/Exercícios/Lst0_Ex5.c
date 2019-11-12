#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso;

	printf("Informe o peso: ");
	scanf("%f", &peso);

	printf("O novo peso em gramas é de: %f\n", peso * 1000);

	return 0;
}