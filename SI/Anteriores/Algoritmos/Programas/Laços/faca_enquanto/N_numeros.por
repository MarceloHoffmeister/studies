programa
{
	funcao inicio()
	{
		inteiro n = 0, i = 0, soma = 0

		faca
		{
			escreva ("Entre com um n�mero natural: ")
			leia (n)
		} enquanto (n <= 0)

		para (i = 0; i <= n; i++) 
		{
			soma += i
		}

		escreva ("\nA soma dos N primeiros n�meros de ", n," � igual a ", soma, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 156; 
 */