#include <stdio.h>
#include <stdlib.h>

int main()
{
	float temp;

	printf("Informe a temperatura: ");
	scanf("%f", &temp);

	printf("A temperatura na escala Fahrenheit é: %f\n", 9/5 * temp + 32);

	return 0;
}