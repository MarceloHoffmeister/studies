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
		
		escreva ("Insira um n�mero: ")
		leia (n)

		se (n % 2 == 0) {
			escreva ("� par!\n\n")
		} senao { escreva ("� impar!\n\n") }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 284; 
 */