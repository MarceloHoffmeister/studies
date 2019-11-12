#include <stdio.h>
#include <stdlib.h>

int main()
{
	float peso, seEngordar, seEmagrecer;

	printf("Informe o peso: ");
	scanf("%f", &peso);

	seEngordar = peso * 0.15;

	seEmagrecer = peso * 0.20;

	printf("O novo peso se engordar %%15 é: %f\n", seEngordar + peso);

	printf("O novo peso se seEmagrecer %%20 é: %f\n", seEmagrecer + peso);

	return 0;
}