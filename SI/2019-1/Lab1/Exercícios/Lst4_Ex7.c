#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ec, s;

	printf("Solteiro(S), casado(C), viúvo(V), divorciado(D) e inválido\n");
	printf("Digite o estado civil da pessoa: ");
	scanf(" %c", &ec);

	printf("\nMasculino(M), feminino(F)\n");
	printf("Agora insira o sexo da pessoa: ");
	scanf(" %c", &s);

	switch(ec)
	{
		case 'S':

			if (s == 'F' || s == 'f') {
				printf("Solteira\n");
			} else {
				printf("Solteito\n");
			}
			
		break;

		case 's':

			if (s == 'F' || s == 'f') {
				printf("Solteira\n");
			} else {
				printf("Solteito\n");
			}
			
		break;


		case 'C':

			if (s == 'F' || s == 'f') {
				printf("Casada\n");
			} else {
				printf("Casado\n");
			}

		break;

		case 'c':

			if (s == 'F' || s == 'f') {
				printf("Casada\n");
			} else {
				printf("Casado\n");
			}

		break;

		case 'V':

			if (s == 'F' || s == 'f') {
				printf("Viúva\n");
			} else {
				printf("Viúvo\n");
			}

		break;

		case 'v':

			if (s == 'F' || s == 'f') {
				printf("Viúva\n");
			} else {
				printf("Viúvo\n");
			}

		break;

		case 'D':

			if (s == 'F' || s == 'f') {
				printf("Divorciada\n");
			} else {
				printf("Divorciado\n");
			}

		break;

		case 'd':

			if (s == 'F' || s == 'f') {
				printf("Divorciada\n");
			} else {
				printf("Divorciado\n");
			}

		break;

		default:

			printf("Inválido!\n");
	}

	return 0;
}