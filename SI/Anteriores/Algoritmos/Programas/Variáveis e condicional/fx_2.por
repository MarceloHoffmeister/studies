programa
{
	funcao inicio()
	{
		real x, Fx
		escreva ("Digite o valor de x: ")
		leia (x)

		se (x <= 1.0)
		{
			Fx = 1.0
		}
		senao se (x > 1.0 e x <= 2.0)
		{
			Fx = 2.0
		}

		senao se (x > 2.0 e x <= 3.0)
		{
			Fx = x * x
		}
		senao se (x > 3.0)
		{
			Fx =  (x * x) * x
		}
		senao
		{
			escreva ("\nValor de x incalcul�vel!\n")
		}

		escreva ("\nO valor de x aplicado � fun��o y=F(x) � igual a ", Fx, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 259; 
 */