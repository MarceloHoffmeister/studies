#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal, sal_min, desc;
	int imp;

	printf("Informe o salário mínimo: ");
	scanf("%f", &sal_min);

	printf("Informe o salário do empregado: ");
	scanf("%f", &sal);

	imp = sal / sal_min;

	desc = sal * (0.08 * imp);

	printf("Tributo empregador: %.2f\n", sal * 0.12);

	printf("Tributo empregado: %.2f\n", desc);

	printf("Salário empregado com desconto: %.2f\n", sal - desc);

	return 0;
}