programa
{
	funcao inicio()
	{
		inteiro n, m1=0, m2=0, m3=0, m4=0, m5=0
		escreva ("Entre com um número inteiro: ")
		leia (n)
		se (n >= 100)
		{
			m1 = n / 100
			m2 = (n % 100) / 50
			m3 = ((n % 100) % 50) / 25
			m4 = (((n % 100) % 50) % 25) / 10
			m5 = ((((n % 100) % 50) % 25) % 10) / 5
		}
		senao se ((n < 100) e (n >= 50))
		{
			m2 = n / 50
			m3 = (n % 50) / 25
			m4 = ((n % 50) % 25) / 10
			m5 = (((n % 50) % 25) % 10) / 5
		}
		senao se ((n < 50) e (n >= 25))
		{
			m3 = n / 25
			m4 = (n % 25) / 10
			m5 = ((n % 25) % 10) / 5
		}
		senao se ((n < 25) e (n >= 10))
		{
			m4 = n / 10
			m5 = (n % 10) / 5
		}
		senao se ((n < 10) e (n >= 5))
		{
			m5 = n / 5
		}

		escreva ("\nAs moedas utilizadas para compor o valor de ", n, " moedas foram: ", m1, " moedas de 1 real, ", m2, " moedas de 50 centavos, ", m3, " moedas de 25 centavos, ", m4, " moedas de 10 centavos, ", m5, " moedas de 5 centavos.\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 770; 
 */