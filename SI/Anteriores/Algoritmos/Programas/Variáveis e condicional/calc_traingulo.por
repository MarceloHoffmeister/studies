programa
{
	funcao inicio()
	{
		inteiro a, b, c
		escreva ("Insira os lados do triângulo:\n")
		leia (a)
		leia (b)
		leia (c)

		se (((((b - c) * 1) < a) e (a < (b + c))) ou ((((a - c) * 1) < b) e (b < (a + c))) ou ((((a - b) * 1) < c) e (c < (a + b))))
		{
			se (a == b e b == c e a == c)
			{
				escreva ("\nÉ um triângulo equilátero.\n")
			}
			senao se ((a == b e a != c) ou (b == c e c != a) ou (a == c e c != b))
			{
				escreva ("\nÉ um triângulo isósceles.\n")
			}
			senao
			{
				escreva ("\nÉ um triângulo escaleno.\n")
			}
		}
		senao
		{
			escreva ("\nNão é possível formar um trinângulo com essas medidadas.\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 493; 
 */