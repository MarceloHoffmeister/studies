programa
{
	funcao inicio()
	{
		inteiro n1, n2, n3, n4, ordem
		cadeia ordem2
		escreva ("Insira quatro n�meros:\n")
		leia (n1)
		leia (n2)
		leia (n3)
		leia (n4)

		se (n4 < n1)
		{
			ordem2 = n3 + "" + n2 + "" + n1 + "" + n4 + ""
		}
		senao se (n4 < n2)
		{
			ordem2 = n3 + "" + n2 + "" + n4 + "" + n1 + ""
		}
		senao se (n4 < n3)
		{
			ordem2 = n3 + "" + n4 + "" + n2 + "" + n1 + ""
		}
		senao
		{
			ordem2 = n4 + "" + n3 + "" + n2 + "" + n1 + ""
		}

		escreva ("\nA ordem decrescente dos n�meros � ", ordem2, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 459; 
 */