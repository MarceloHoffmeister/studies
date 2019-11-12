#include <stdio.h>
#include <stdlib.h>

int main()
{
	float r;

	printf("Digite o raio da pizza: ");
	scanf("%f", &r);

	printf("Área da pizza: %.2f\n", 3.14 * (r * r));

	return 0;
}