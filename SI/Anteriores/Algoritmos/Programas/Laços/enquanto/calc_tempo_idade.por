programa
{
	funcao inicio()
	{
		real x1 = 1.50, x2 = 1.10
		inteiro i = 0, cont = 0

		enquanto (x1 > x2)
		{
			x1 += 0.02
			x2 += 0.03
			cont++
		}

		escreva ("Juca irá demorar ", cont, " anos para ser maior que Chico.\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 233; 
 */