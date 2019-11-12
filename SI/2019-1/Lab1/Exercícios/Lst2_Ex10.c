#include <stdio.h>
#include <stdlib.h>

int main()
{
	int qL, qG, qG2;

	printf("Informe a quantidade de latas de refrigerante adquiridas: ");
	scanf("%d", &qL);
	printf("Informe a quantidade de latas de garrafas 600ml adquiridas: ");
	scanf("%d", &qG);
	printf("Informe a quantidade de latas de garrafas 2L adquiridas: ");
	scanf("%d", &qG2);


	printf("O total de litros de refrigerantes adquiridos é %.2f\n",(qL * (350 / 1000.0)) + (qG * (600 / 1000.0)) + (qG2 * 2));

	return 0;
}