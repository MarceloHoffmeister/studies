#include <stdio.h>
#include <stdlib.h>

int main()
{
	float pes;

	printf("Informe a medida: ");
	scanf("%f", &pes);

	printf("A medida convertida para metros é: %f\n", pes * 0.3048);

	return 0;
}