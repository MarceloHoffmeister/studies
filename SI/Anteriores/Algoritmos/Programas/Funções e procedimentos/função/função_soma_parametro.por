programa
{
	funcao inicio()
	{
		inteiro num1 = 0 , num2 = 0, soma_total = 0

		escreva ("Entre com um n�mero inteiro: ")
		leia (num1)
		
		escreva ("Entre com outro n�mero inteiro: ")
		leia (num2)

		soma_total = soma_n(num1, num2)

		escreva ("\nA soma entre os N n�meros entre ", num1, " e ", num2, " � ", soma_total, "\n.")
	}

	funcao inteiro soma_n(inteiro n1, inteiro n2)
	{
		inteiro soma = 0, i = 0
		
		se (n1 < n2) {
			para (i = n1 + 1; i < n2; i++)
			{
				soma += i	
			}
		} senao {
			para (i = n2 + 1; i < n1; i++)
			{
				soma += i	
			}
		}

		retorne soma
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 9; 
 */