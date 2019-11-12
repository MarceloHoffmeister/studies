programa
{
	funcao inicio()
	{
		inteiro n=0

		escreva ("Insira um número maior 1: ")
		leia (n)

		se (n < 1)
		{
			escreva ("Número não permitido!")
		}
		senao se (n >= 1)
		{
			se (n % 2 != 0)
			{
				escreva ("\nNão é primo!\n")
			}
			senao se ((n / n == 1) e (n / 1 == n))
			{
				escreva ("\nÉ primo!\n")
			}
			senao
			{
				escreva ("\nNão é primo!\n")
			}
		}
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 201; 
 */