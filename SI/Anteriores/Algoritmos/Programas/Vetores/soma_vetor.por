programa
{
	funcao inicio()
	{
		inteiro vetor1[5], vetor2[5], vetor3[5]

		// preenche o vetor
		para (inteiro i = 0; i < 5; i++)
		{
			escreva ("Insira um n�mero para o vetor1: ")
			leia (vetor1[i])
			limpa()
		}

		para (inteiro i = 0; i < 5; i++)
		{
			escreva ("Insira um n�mero para o vetor2: ")
			leia (vetor2[i])
			limpa()
		}

		para (inteiro i = 0; i < 5; i++)
		{
			vetor3[i] = vetor1[i] + vetor2[i]
		}

		// exibe o vetor

		escreva ("A soma dos vetores �: ")

		para (inteiro i = 0; i < 5; i++)
		{
			escreva ("\nVetor[", i, "]: ", vetor3[i])
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 484; 
 */