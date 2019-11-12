programa
{
	funcao inicio()
	{
		inteiro n = 0, i = 0, j = 0

		escreva ("Insira um número de código: ")
		leia (n)

		limpa ()

		escreva ("Código: ", n, "\n\n")
		
		para (i = 1; i <= n; i++)
		{
			para (j = 1; j <= n; j++)
			{
				escreva ("*")
			}
			
			escreva ("\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 132; 
 */