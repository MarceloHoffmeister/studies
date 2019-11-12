#include <stdio.h>
#include <stdlib.h>

int main()
{
	float price;
	char cat;

	printf("Digite o preço do produto: ");
	scanf("%f", &price);

	printf("Agora insira a categoria do produto: ");
	scanf(" %c", &cat);

	switch(cat)
	{
		case 'A':
			printf("Valor do produto com reajuste: %.1f\n", price + (price * 0.50));
		break;

		case 'B':
			printf("Valor do produto com reajuste: %.1f\n", price + (price * 0.25));
		break;

		case 'C':
			printf("Valor do produto com reajuste: %.1f\n", price + (price * 0.15));
		break;

		default:
			printf("Valor do produto com reajuste: %.1f\n", price + (price * 0.05));
	}

	return 0;
}