programa
{
	funcao inicio()
	{
		inteiro vetor[100], j = 0

		// preenche o vetor
		para (inteiro i = 0; i < 100; i++)
		{
			se (i % 2 != 0)
			{
				vetor[i] = 1
			}
			senao
			{
				vetor[i] = 0
			}
		}

		// exibe o vetor
		escreva ("Números do vetor:\n")
		
		para (inteiro p = 0; p < 100; p++)
		{
			escreva ("\nVetor[", p, "]: ", vetor[p])
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 353; 
 */