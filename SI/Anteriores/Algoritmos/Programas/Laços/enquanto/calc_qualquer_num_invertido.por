programa
{
	funcao inicio()
	{
		inteiro n, m = 0, r

		escreva ("Insira um n�mero: ")
		leia (n)

		enquanto (n > 0)
		{
			r = n % 10
			m = m * 10 + r
			n = n / 10
		}

		escreva ("\nO n�mero invertido � ", m, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 91; 
 */