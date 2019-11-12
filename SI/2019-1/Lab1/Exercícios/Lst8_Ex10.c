#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cod = 0, inv = 0;
	float valor = 0.0, rend = 0.0;


	do {

		printf("Código do cliente: ");
		scanf("%d", &cod);

		printf("Tipo do investimento:\n");
		printf("[1] Tipo 1\n");
		printf("[2] Tipo 2\n");
		printf("[3] Tipo 3\n");
		printf("Valor: ");
		scanf("%d", &inv);

		printf("Valor investido: ");
		scanf("%f", &valor);

		if (inv == 1) {
			
			rend = valor * 0.2;

			if (inv == 2) {

				rend = valor * 0.3;

			}

		} else {

			rend = valor * 0.4;
		}

		printf("Rendimento mensal: %.2f\n", rend);

	} while (cod <= 0);	

	return 0;
}