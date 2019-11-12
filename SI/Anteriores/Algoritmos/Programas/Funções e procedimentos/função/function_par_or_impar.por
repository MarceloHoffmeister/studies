programa
{
	funcao inicio()
	{
		inteiro cont = 0, n = 0
		
		enquanto (cont <= 4)
		{
			escreva ("Insira um número: ")
			leia (n)
			
			inteiro v = par_impar(n)
			
			se (v == 0) {
				escreva ("É par!\n\n")
			} senao { escreva ("É impar!\n\n") }
			
			cont++
		}
	}

	funcao inteiro par_impar(inteiro p)
	{
		
		se (p % 2 == 0) {
			retorne 0
		} senao { retorne 1 }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 56; 
 */