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
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 111; 
 */