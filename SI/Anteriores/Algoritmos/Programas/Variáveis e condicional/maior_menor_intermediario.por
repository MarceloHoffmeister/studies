programa
{
	funcao inicio()
	{
		inteiro a, b, c, maior=0, intermediario=0, menor=0

		escreva ("Informe o primeiro número: ")
		leia (a)

		escreva ("Informe o segundo número: ")
		leia (b)

		escreva ("Informe o terceiro número: ")
		leia (c)

		se ((a > b) e (a > c ))
		{
			maior = a
		}
		senao se ((b > a) e (b > c))
		{
			maior = b
		}
		senao
		{
			maior = c
		}

		se ((a < b) e (a < c))
		{
			menor = a
		}
		senao se ((b < a) e (b < c))
		{
			menor = b
		}
		senao
		{
			menor = c
		}

		se (((a > b) e (a < c)) ou ((a > c) e (a < b)))
		{
			intermediario = a
		}
		senao se (((b < c) e (b > a)) ou ((b < a) e (b > c)))
		{
			intermediario = b
		}
		senao
		{
			intermediario = c
		}

		escreva ("O maior valor é ", maior, ", o intermediario é ", intermediario, " e o menor é ", menor, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 709; 
 */