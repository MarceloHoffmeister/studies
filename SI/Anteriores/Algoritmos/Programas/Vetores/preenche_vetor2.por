programa
{
	funcao inicio()
	{
		inteiro v[10], p = 0

		// preenche o vetor

		para (inteiro i = 1; i < 20; i+=2)
		{
			v[p] = i * i
			p = p + 1
		}

		// exibe o vetor

		para (p = 0; p < 10; p++)
		{
			escreva ("\nV[", p, "]: ", v[p])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 111; 
 */