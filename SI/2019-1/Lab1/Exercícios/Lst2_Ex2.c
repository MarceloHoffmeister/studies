#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dias, meses, anos; // float para quantidade de dias pois ao ser dividido por 365 (ano) quebraria o valor

	printf("Informe a quantidade de dias sem acidentes: ");
	scanf("%d", &dias);

	anos = dias / 365;

	meses = dias % 365 / 30;

	dias = dias % 30;

	printf("Estamos a %d ano(s), %d mês(es) e %d dia(s) sem acidentes\n", anos, meses, dias);

	return 0;
}