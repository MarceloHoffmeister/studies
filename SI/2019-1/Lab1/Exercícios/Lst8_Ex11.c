#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[20] = "";

	while (strcmp(nome, "fim") != 0) {

		printf("Digite um nome: ");
		scanf("%s", nome);

		printf("A primeira letra de %s é %c\n", nome, nome[0]);

	}

	return 0;
}