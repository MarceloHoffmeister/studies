programa
{
	funcao inicio()
	{
		inteiro a, b, c
		escreva ("Insira os lados do tri�ngulo:\n")
		leia (a)
		leia (b)
		leia (c)

		se (((((b - c) * 1) < a) e (a < (b + c))) ou ((((a - c) * 1) < b) e (b < (a + c))) ou ((((a - b) * 1) < c) e (c < (a + b))))
		{
			se (a == b e b == c e a == c)
			{
				escreva ("\n� um tri�ngulo equil�tero.\n")
			}
			senao se ((a == b e a != c) ou (b == c e c != a) ou (a == c e c != b))
			{
				escreva ("\n� um tri�ngulo is�sceles.\n")
			}
			senao
			{
				escreva ("\n� um tri�ngulo escaleno.\n")
			}
		}
		senao
		{
			escreva ("\nN�o � poss�vel formar um trin�ngulo com essas medidadas.\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 493; 
 */