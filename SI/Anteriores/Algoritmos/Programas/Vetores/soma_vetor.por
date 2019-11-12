programa
{
	funcao inicio()
	{
		inteiro vetor1[5], vetor2[5], vetor3[5]

		// preenche o vetor
		para (inteiro i = 0; i < 5; i++)
		{
			escreva ("Insira um número para o vetor1: ")
			leia (vetor1[i])
			limpa()
		}

		para (inteiro i = 0; i < 5; i++)
		{
			escreva ("Insira um número para o vetor2: ")
			leia (vetor2[i])
			limpa()
		}

		para (inteiro i = 0; i < 5; i++)
		{
			vetor3[i] = vetor1[i] + vetor2[i]
		}

		// exibe o vetor

		escreva ("A soma dos vetores é: ")

		para (inteiro i = 0; i < 5; i++)
		{
			escreva ("\nVetor[", i, "]: ", vetor3[i])
		}

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 484; 
 */