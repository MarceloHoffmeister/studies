programa
{
	funcao inicio()
	{
		inteiro resposta = 0, n1 = 0, n2 = 0, result = 0

		faca
		{
			escreva ("Menu\n")
			escreva ("[1] - Multiplica��o\n")
			escreva ("[2] - Divis�o\n")			
			escreva ("[3] - Sair\n")			
			escreva ("\nOp��o: ")
			leia (resposta)

			escolha (resposta)
			{
				caso 1:
					escreva ("\nEntre com dois valores:\n")
					leia (n1)
					leia (n2)
					result = n1 * n2
				pare

				caso 2:
					escreva ("\nEntre com dois valores:\n")
					leia (n1)
					leia (n2)
					result = n1 / n2
				pare

				caso 3:
					escreva ("Fim do programa!")
					pare

				caso contrario:
					escreva ("Entrada inv�lida!")
					pare
			}
			
		} enquanto ((resposta <= 0) ou (resposta > 3))

		limpa ()

		escreva ("O resultado da opera��o � ", result, ".\n")

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 738; 
 */