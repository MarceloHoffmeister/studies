programa
{
	funcao inicio()
	{
		inteiro n1, n2, c, u, d
		escreva ("Entre com o primeiro número de três digitos: \n")
		leia (n1)
		escreva ("Entre com o segundo número de três digitos: \n")
		leia (n2)

		se (n1 > 999 ou n1 < 100)
		{
			escreva ("\nNúmero inválido")
			pare
		}

		se (n2 > 999 ou n2 < 100)
		{
			escreva ("\nNúmero inválido")
			pare
		}

		c = n1 / 100
		d = (n1 % 100) / 10
		u = (n1 % 100) % 10

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 428; 
 */