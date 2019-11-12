programa
{
	funcao inicio()
	{
		inteiro n=0, fat=1, i=0

		escreva ("Insira um número: ")
		leia (n)

		limpa ()

		para (i = 1; i <= n; i++)
		{
			fat *= i
		}

		escreva ("O fatorial de ", n, " é ", fat, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 133; 
 */