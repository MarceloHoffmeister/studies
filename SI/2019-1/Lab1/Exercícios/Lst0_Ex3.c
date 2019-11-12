#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sal, vendas, comissao, novo_sal;

	printf("Informe o salario do funcionário: ");
	scanf("%f", &sal);

	printf("Informe o valor das vendas: ");
	scanf("%f", &vendas);

	comissao = vendas * 0.04;

	novo_sal = sal + comissao;

	printf("O valor da comissão é de %f\n", comissao);

	printf("O valor do novo salario é de %f\n", novo_sal);

	return 0;
}