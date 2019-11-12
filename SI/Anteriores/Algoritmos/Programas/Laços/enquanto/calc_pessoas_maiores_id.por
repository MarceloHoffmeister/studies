programa
{
	funcao inicio()
	{
		inteiro id = 0, cont = 0

		escreva ("Insira sua idade (digite -1 para parar): ")
		leia (id)

		enquanto (id > 0)
		{
			se (id >= 18)
			{
				cont++	
			}

			limpa ()
			
			escreva ("Insira sua idade (digite -1 para parar): ")
			leia (id)
		}

		limpa ()

		escreva ("O número de pessoas com maior de 18 anos são ", cont, " pessoas.\n")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 298; 
 */