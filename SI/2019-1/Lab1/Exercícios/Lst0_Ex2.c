#include <stdio.h>
#include <stdlib.h>

int main()
{
	float prod, preco;

	printf("Informe o proço do produto: ");
	scanf("%f", &prod);

	preco = prod - (prod * 0.10);

	printf("O preço do produto com desconto %f\n", preco);

	return 0;
}