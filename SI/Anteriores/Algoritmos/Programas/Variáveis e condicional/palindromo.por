programa
{
	funcao inicio()
	{
		inteiro n, m3=0, m2=0, m=0, c=0, d=0, u=0
		escreva ("Entre com um n�mero de 6 dig�tos: ")
		leia (n)

		m3 = n / 100000
		m2 = (n % 100000) / 10000
		m = ((n % 100000) % 10000) / 1000
		c = (((n % 100000) % 10000) % 1000) / 100
		d = ((((n % 100000) % 10000) % 1000) % 100) / 10
		u = ((((n % 100000) % 10000) % 1000) % 100) % 10

		se ((m3 == u) e (m2 == d) e (m == c))
		{
			escreva ("� pal�ndromo!\n")
		}
		senao
		{
			escreva ("N�o � pal�ndromo!\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 448; 
 */