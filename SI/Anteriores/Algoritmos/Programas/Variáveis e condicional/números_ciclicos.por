programa
{
	funcao inicio()
	{
		inteiro n1, n2, c, u, d
		escreva ("Entre com o primeiro n�mero de tr�s digitos: \n")
		leia (n1)
		escreva ("Entre com o segundo n�mero de tr�s digitos: \n")
		leia (n2)

		se (n1 > 999 ou n1 < 100)
		{
			escreva ("\nN�mero inv�lido")
			pare
		}

		se (n2 > 999 ou n2 < 100)
		{
			escreva ("\nN�mero inv�lido")
			pare
		}

		c = n1 / 100
		d = (n1 % 100) / 10
		u = (n1 % 100) % 10

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 428; 
 */