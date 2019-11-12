#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, id;
	char sex, nome[30], nomes[100] = "";

	for (i = 1; i <= 3; i++) {

		printf("Escreva o nome: ");
		scanf("%s", nome);

		printf("Escolha o sexo (M/F): ");
		scanf(" %c", &sex);

		printf("Escolha a idade: ");
		scanf("%d", &id);

		if (sex == 'M' || sex == 'm') {
			if (id >= 21) {

				printf("Nome: %s\n\n", nome);

			}
		}		
	}

	return 0;
}