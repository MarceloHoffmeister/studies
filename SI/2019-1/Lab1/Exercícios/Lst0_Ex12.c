#include <stdio.h>
#include <stdlib.h>

int main()
{
	float dolar, real;

	printf("Informe a cotação do dólar para hoje: ");
	scanf("%f", &dolar);

	printf("Informe a quantidade de reais disponíveis: ");
	scanf("%f", &real);

	printf("O valor de real convertido para dólar é de: %f\n", real * dolar);

	return 0;
}