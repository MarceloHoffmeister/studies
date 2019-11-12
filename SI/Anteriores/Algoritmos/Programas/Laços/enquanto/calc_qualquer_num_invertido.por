programa
{
	funcao inicio()
	{
		inteiro n, m = 0, r

		escreva ("Insira um número: ")
		leia (n)

		enquanto (n > 0)
		{
			r = n % 10
			m = m * 10 + r
			n = n / 10
		}

		escreva ("\nO número invertido é ", m, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 91; 
 */