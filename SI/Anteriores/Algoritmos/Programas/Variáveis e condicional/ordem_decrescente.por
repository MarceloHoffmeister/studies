programa
{
	funcao inicio()
	{
		inteiro n1, n2, n3, maior, menor, ordem
		escreva ("Insira três números inteiros:\n")
		leia (n1)
		leia (n2)
		leia (n3)

		maior = n1

		se (maior < n2)
		{
			maior = n2
		}
		se (maior < n3)
		{
			maior = n3
		}

		menor = n1

		se (n2 < menor)
		{
			menor = n2
		}
		se (n3 < menor)
		{
			menor = n3
		}

		se (maior == n3 e menor == n2)
		{
			ordem = (maior * 100) + (n1 * 10) + menor
		}
		senao se (maior == n3 e menor == n1)
		{
			ordem = (maior * 100) + (n2 * 10) + menor
		}
		senao se (maior == n2 e menor == n1)
		{
			ordem = (maior * 100) + (n3 * 10) + menor
		}
		senao se (maior == n2 e menor == n3)
		{
			ordem = (maior * 100) + (n1 * 10) + menor
		}
		senao se (maior == n1 e menor == n2)
		{
			ordem = (maior * 100) + (n3 * 10) + menor
		}
		senao se (maior == n1 e menor == n3)
		{
			ordem = (maior * 100) + (n2 * 10) + menor
		}
		escreva ("\nA ordem decrescente é ", ordem, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 941; 
 */