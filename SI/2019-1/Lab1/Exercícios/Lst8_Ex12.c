#include <stdio.h>
#include <stdlib.h>

int main()
{
	float salAnt = 0.0, valor = 0.0;
	int cod = 0, cod2 = 0.0;

		printf("Informe o saldo anterior: ");
		scanf("%f", &salAnt);

		if (salAnt > 0) {

			do {

				printf("Código da operação\n");
				printf("[10] Saque em dinheiro\n");
				printf("[33] Depósito\n");
				printf("[04] Pagamento de cheque\n");
				printf("[00] Sair\n");
				printf("Agora informe o código da operação: ");
				scanf("%d", &cod);

				switch (cod) {

					case 10:
						printf("Saque em dinheiro\n");
						printf("Selecione a quantidade ou digite outro valor\n");
						printf("[1] R$ 20,00\n");
						printf("[2] R$ 40,00\n");
						printf("[3] R$ 60,00\n");
						printf("[4] R$ 80,00\n");
						printf("[5] R$ 100,00\n");
						printf("Opção/valor: ");
						scanf("%d", &cod2);

						switch (cod2) {

							case 1:
								if ((salAnt - 20.0) < 0) {

									printf("Saldo insuficiente!\n");

								} else {

									salAnt -= 20.0;
									printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

								}
							break;
							case 2:
								if ((salAnt - 40.0) < 0) {

									printf("Saldo insuficiente!\n");

								} else {

									salAnt -= 40.0;
									printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

								}
							break;
							case 3:
								if ((salAnt - 60.0) < 0) {

									printf("Saldo insuficiente!\n");

								} else {

									salAnt -= 60.0;
									printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

								}
							break;
							case 4:
								if ((salAnt - 80.0) < 0) {

									printf("Saldo insuficiente!\n");

								} else {

									salAnt -= 80.0;
									printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

								}
							break;
							case 5:
								if ((salAnt - 100.0) < 0) {

									printf("Saldo insuficiente!\n");

								} else {

									salAnt -= 100.0;
									printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

								}
							break;
							default:
								if (cod2 > 0 || (salAnt - cod2) < 0) {

									printf("Saldo insuficiente!\n");

									if ((cod2 % 5) == 0) {

										printf("Valor inválido. Esse caixa aceita somente valores múltiplos de 5!");
									}

								} else {

									printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt - cod2);

								}
							break;
						}
					break;
					case 33:
						printf("Depósito\n");
						printf("Digite o valor: ");
						scanf("%f", &valor);

						if (valor > 0) {

								salAnt += valor;
								printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

						}
					break;
					case 04:
						printf("Pagamento de cheque\n");
						printf("Digite o valor do cheque: ");
						scanf("%f", &valor);

						if (valor > 0) {

								salAnt += valor;
								printf("Operação realizada com sucesso! Saldo atual: R$%.2f\n", salAnt);

							}
					break;
					case 00:
						printf("Saindo ...\n");
					break;
					default:
						printf("Opção inválida!\n");
					break;
				}

			} while (cod != 0);	

		} else {

			printf("Valor do saldo inferior a 1!\n");
		}

	return 0;
}