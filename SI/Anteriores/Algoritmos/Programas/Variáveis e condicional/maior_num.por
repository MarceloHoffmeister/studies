programa
{
	funcao inicio()
	{
		inteiro n1, n2, n3, maior
		escreva ("Entre com tr�s n�meros:\n")
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

		escreva ("\nO maior n�mero � ", maior, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 101; 
 */