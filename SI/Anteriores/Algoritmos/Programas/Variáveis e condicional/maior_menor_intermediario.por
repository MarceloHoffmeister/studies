programa
{
	funcao inicio()
	{
		inteiro a, b, c, maior=0, intermediario=0, menor=0

		escreva ("Informe o primeiro n�mero: ")
		leia (a)

		escreva ("Informe o segundo n�mero: ")
		leia (b)

		escreva ("Informe o terceiro n�mero: ")
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

		escreva ("O maior valor � ", maior, ", o intermediario � ", intermediario, " e o menor � ", menor, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 709; 
 */