programa
{
	funcao inicio()
	{
		inteiro conta, c, d, u, inverso, soma, verificador
		escreva ("Insira o numero da conta: ")
		leia (conta)

		se (conta > 999 ou conta < 100)
		{
			escreva ("\nNúmero de conta inválido!")
			pare
		}

		c = conta / 100
		d = (conta % 100) / 10
		u = (conta % 10) % 100

		inverso =  (u * 100) + (d * 10) + c

		soma = conta + inverso

		c = soma / 100
		d = (soma % 100) / 10
		u = (soma % 10) % 100

		soma = (c * 1) + (d * 2) + (u * 3)

		verificador = (soma % 10) % 100

		escreva ("\nO dígito verificador dessa conta é ", verificador, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 373; 
 */