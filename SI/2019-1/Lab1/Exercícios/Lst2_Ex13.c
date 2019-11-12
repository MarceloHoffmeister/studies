#include <stdio.h>
#include <stdlib.h>

int main()
{
	float hAula, inss, ir;
	int q;

	printf("Informe o valor da hora aula: ");
	scanf("%f", &hAula);

	printf("Informe o valor do INSS: ");
	scanf("%f", &inss);

	printf("Informe o valor do imposto de renda: ");
	scanf("%f", &ir);

	printf("Informe quantidade de horas aula: ");
	scanf("%d", &q);

	printf("O salário líquido do professor é de R$%.2f\n", q * hAula - (inss + ir));

	return 0;
}