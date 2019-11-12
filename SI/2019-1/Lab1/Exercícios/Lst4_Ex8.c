#include <stdio.h>
#include <stdlib.h>

int main()
{
	int p, quant;
	float preco;

	printf("____________________________________________________________\n");
	printf("| CÓDIGO DO LANCHE |  ESPECIFICAÇÃO  | PREÇO UNITÁRIO (R$) |\n");
	printf("|------------------|-----------------|---------------------|\n");
	printf("|      100         | Cachorro quente |        1,10         |\n");
	printf("|------------------|-----------------|---------------------|\n");
	printf("|      101         | Bauru Simples   |        1,30         |\n");
	printf("|------------------|-----------------|---------------------|\n");
	printf("|      102         | Bauru c/ovo     |        1,50         |\n");
	printf("|------------------|-----------------|---------------------|\n");
	printf("|      103         | Hambúrger       |        1,10         |\n");
	printf("|------------------|-----------------|---------------------|\n");
	printf("|      104         | Cheeseburger    |        1,30         |\n");
	printf("|------------------|-----------------|---------------------|\n");
	printf("|      105         | Refrigerante    |        1,00         |\n");
	printf("|__________________|_________________|_____________________|\n");

	printf("\nEscolha uma opção: ");
	scanf("%d", &p);

	printf("\nQuantidade: ");
	scanf("%d", &quant);

	switch(p)
	{
		case 100:
			printf("Opção 100: Cachorro quente - R$ 1,10\n");
			printf("Preço total: R$ %.2f\n", quant * 1.10);
		break;

		case 101:
			printf("Opção 101: Bauru Simples - R$ 1,30\n");
			printf("Preço total: R$ %.2f\n", quant * 1.30);
		break;

		case 102:
			printf("Opção 102: Bauru c/ovo - R$ 1,50\n");
			printf("Preço total: R$ %.2f\n", quant * 1.50);
		break;

		case 103:
			printf("Opção 103: Hambúrger - R$ 1,10\n");
			printf("Preço total: R$ %.2f\n", quant * 1.10);
		break;

		case 104:
			printf("Opção 104: Cheeseburger - R$ 1,30\n");
			printf("Preço total: R$ %.2f\n", quant * 1.30);
		break;

		case 105:
			printf("Opção 105: Refrigerante - R$ 1,00\n");
			printf("Preço total: R$ %.2f\n", quant * 1.30);
		break;

		default:
			printf("Opção indisponível!\n");
	}

	return 0;
}