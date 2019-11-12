programa
{
	funcao inicio()
	{
		inteiro n = 0, i = 0, j = 0

		faca
		{
			escreva ("Entre com um número maior que zero: ")
			leia (n)
		} enquanto ( n <= 0)

		limpa ()

		para (i = 1; i <= n; i++)
		{
			para (j = 1; j <= n; j++)
			{
				se (i == j) { escreva (" 1 ") } senao { escreva (" 0 ") }
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
 * @POSICAO-CURSOR = 224; 
 */