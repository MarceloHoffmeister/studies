programa
{
	funcao inicio()
	{
		inteiro n = 0, fat = 1, i = 0

		escreva ("Insira um n�mero: ")
		leia (n)

		enquanto (n > 1)
		{
			
			para (i = 1; i <= n; i++)
			{
				fat *= i
			}

			limpa ()

			escreva ("O fatorial do ", n, " � igual a ", fat, ".\n")

			escreva ("\nInsira um n�mero: ")
			leia (n)

			limpa ()
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 */