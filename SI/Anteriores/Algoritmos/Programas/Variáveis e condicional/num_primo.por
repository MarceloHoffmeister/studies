programa
{
	funcao inicio()
	{
		inteiro n=0

		escreva ("Insira um n�mero maior 1: ")
		leia (n)

		se (n < 1)
		{
			escreva ("N�mero n�o permitido!")
		}
		senao se (n >= 1)
		{
			se (n % 2 != 0)
			{
				escreva ("\nN�o � primo!\n")
			}
			senao se ((n / n == 1) e (n / 1 == n))
			{
				escreva ("\n� primo!\n")
			}
			senao
			{
				escreva ("\nN�o � primo!\n")
			}
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 201; 
 */