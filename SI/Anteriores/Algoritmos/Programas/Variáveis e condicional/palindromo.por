programa
{
	funcao inicio()
	{
		inteiro n, m3=0, m2=0, m=0, c=0, d=0, u=0
		escreva ("Entre com um número de 6 digítos: ")
		leia (n)

		m3 = n / 100000
		m2 = (n % 100000) / 10000
		m = ((n % 100000) % 10000) / 1000
		c = (((n % 100000) % 10000) % 1000) / 100
		d = ((((n % 100000) % 10000) % 1000) % 100) / 10
		u = ((((n % 100000) % 10000) % 1000) % 100) % 10

		se ((m3 == u) e (m2 == d) e (m == c))
		{
			escreva ("É palíndromo!\n")
		}
		senao
		{
			escreva ("Não é palíndromo!\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 448; 
 */