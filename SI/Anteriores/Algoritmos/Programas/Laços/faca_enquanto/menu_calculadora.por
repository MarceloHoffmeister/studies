programa
{
	funcao inicio()
	{
		inteiro resposta = 0, n1 = 0, n2 = 0, result = 0

		faca
		{
			escreva ("Menu\n")
			escreva ("[1] - Multiplicação\n")
			escreva ("[2] - Divisão\n")			
			escreva ("[3] - Sair\n")			
			escreva ("\nOpção: ")
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
					escreva ("Entrada inválida!")
					pare
			}
			
		} enquanto ((resposta <= 0) ou (resposta > 3))

		limpa ()

		escreva ("O resultado da operação é ", result, ".\n")

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 738; 
 */