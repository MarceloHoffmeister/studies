#include <stdio.h>
#include <stdlib.h>

int main()
{
	int p;

	printf("_______________________________________________________________________\n");
	printf("| OPÇÃO |   PROMOÇÃO  |            ESPECIFICAÇÃO              | PREÇO |\n");
	printf("|(ÚNICA)|             |                                       |  (R$) |\n");
	printf("|-------|-------------|---------------------------------------|-------|\n");
	printf("| [1]   |   Big Super | 2 hambúrgueres, queijo, batata fritas | 5,00  |\n");
	printf("|       |    Sanduba  |            e refrigerante             |       |\n");
	printf("|-------|-------------|---------------------------------------|-------|\n");
	printf("| [2]   | Quase Super |      1 hambúrger, batata fritas e     | 3,00  |\n");
	printf("|       |    Sanduba  |              refrigerante             |       |\n");
	printf("|-------|-------------|---------------------------------------|-------|\n");
	printf("| [3]   |   Mirradus  |      1 misto quente e refrigerante    | 1,50  |\n");
	printf("|       |    Sanduba  |                                       |       |\n");
	printf("|_______|_____________|_______________________________________|_______|\n");

	printf("\nEscolha uma opção: ");
	scanf("%d", &p);

	switch(p)
	{
		case 1:
			printf("Opção 1: Big Super Sanduba - R$ 5,00\n");
		break;

		case 2:
			printf("Opção 2: Quase Super Sanduba - R$ 3,00\n");
		break;

		case 3:
			printf("Opção 3: Mirradus - R$ 1,50\n");
		break;

		default:
			printf("Opção indisponível!\n");
	}

	return 0;
}