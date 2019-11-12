#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char job[20] = "";
	int i = 0;

	while (strcmp(job, "sair") != 0) {

		printf("Digite uma profissão: ");
		scanf("%s", job);

		if (strcmp(job, "dentista") == 0 || strcmp(job, "Dentista") == 0 || strcmp(job, "DENTISTA") == 0) {
			i++;
		}

	}

	printf("%d das profissões inseridas são dentistas\n", i);

	return 0;
}