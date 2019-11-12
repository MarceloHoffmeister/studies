programa
{
	funcao inicio()
	{
		inteiro n = 0, i = 0, soma = 0

		faca
		{
			escreva ("Entre com um número natural: ")
			leia (n)
		} enquanto (n <= 0)

		para (i = 0; i <= n; i++) 
		{
			soma += i
		}

		escreva ("\nA soma dos N primeiros números de ", n," é igual a ", soma, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 156; 
 */