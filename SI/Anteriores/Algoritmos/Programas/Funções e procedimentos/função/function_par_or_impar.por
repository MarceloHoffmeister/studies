programa
{
	funcao inicio()
	{
		inteiro cont = 0, n = 0
		
		enquanto (cont <= 4)
		{
			escreva ("Insira um n�mero: ")
			leia (n)
			
			inteiro v = par_impar(n)
			
			se (v == 0) {
				escreva ("� par!\n\n")
			} senao { escreva ("� impar!\n\n") }
			
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
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 56; 
 */