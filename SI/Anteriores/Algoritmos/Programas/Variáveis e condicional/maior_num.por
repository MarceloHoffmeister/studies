programa
{
	funcao inicio()
	{
		inteiro n1, n2, n3, maior
		escreva ("Entre com três números:\n")
		leia (n1)
		leia (n2)
		leia (n3)

		maior = n1

		se (n2 > maior)
		{
			maior = n2
		}
		se (n3 > maior)
		{
			maior = n3
		}

		escreva ("\nO maior número é ", maior, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 101; 
 */