programa
{
	funcao inicio()
	{
		inteiro n1, n2, n3, n4, n5, maior, menor
		escreva ("Escolha cinco n�meros inteiros e confirme apertando enter:\n")
		leia (n1)
		leia (n2)
		leia (n3)
		leia (n4)
		leia (n5)

		maior = n1

		se (n2 > maior)
		{
			maior = n2
		}
		se (n3 > maior)
		{
			maior = n3
		}
		se (n4 > maior)
		{
			maior = n4
		}
		se (n5 > maior)
		{
			maior = n5
		}

		escreva ("\nO maior n�mero entre os cinco � ", maior, ".\n")

		menor = n1

		se (menor > n2)
		{
			menor = n2
		}
		se (menor > n3)
		{
			menor = n3
		}
		se (menor > n4)
		{
			menor = n4
		}
		se (menor > n5)
		{
			menor = n5
		}

		escreva ("\nO menor n�mero entre os cinco � ", menor, ".\n")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 691; 
 */