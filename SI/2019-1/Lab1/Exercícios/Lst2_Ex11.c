#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal, c1, c2;

	printf("Informe o salário: ");
	scanf("%f", &sal);
	printf("Informe a primeira conta: ");
	scanf("%f", &c1);
	printf("Informe a segunda conta: ");
	scanf("%f", &c2);


	printf("O que restará do salário de João é R$%.2f\n", sal - ((c1 + (c1 * 0.02)) + (c2 + (c2 * 0.02))));

	return 0;
}