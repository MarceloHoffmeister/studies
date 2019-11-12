programa
{
	funcao inicio()
	{
		inteiro n = 0, fat = 1, i = 0

		escreva ("Insira um número: ")
		leia (n)

		enquanto (n > 1)
		{
			
			para (i = 1; i <= n; i++)
			{
				fat *= i
			}

			limpa ()

			escreva ("O fatorial do ", n, " é igual a ", fat, ".\n")

			escreva ("\nInsira um número: ")
			leia (n)

			limpa ()
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 220; 
 */