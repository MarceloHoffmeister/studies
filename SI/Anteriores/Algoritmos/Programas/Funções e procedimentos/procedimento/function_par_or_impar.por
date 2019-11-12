programa
{
	funcao inicio()
	{
		inteiro cont = 0
		
		enquanto (cont <= 4)
		{
			par_impar()
			cont++
		}
	}

	funcao par_impar()
	{
		
		inteiro n
		
		escreva ("Insira um número: ")
		leia (n)

		se (n % 2 == 0) {
			escreva ("É par!\n\n")
		} senao { escreva ("É impar!\n\n") }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 284; 
 */