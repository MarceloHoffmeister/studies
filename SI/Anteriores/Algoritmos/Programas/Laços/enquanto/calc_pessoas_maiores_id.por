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

		escreva ("O n�mero de pessoas com maior de 18 anos s�o ", cont, " pessoas.\n")

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 298; 
 */