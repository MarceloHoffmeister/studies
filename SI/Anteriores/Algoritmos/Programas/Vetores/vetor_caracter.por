programa
{
	funcao inicio()
	{
		caracter vetor [10], busca
		inteiro cont = 0

		// preenche o vetor
		para (inteiro i = 0; i < 10; i++)
		{
			escreva ("Insira uma letra: ")
			leia (vetor[i])
			limpa()

			se (vetor[i] == '0')
				pare
		}

		// busca no vetor
		escreva ("Insira uma letra para a busca: ")
		leia(busca)

		para (inteiro i = 0; i < 10; i++)
		{			
			se (vetor[i] == busca)
				cont++
		}

		//exibe o resultado
		se (cont > 0)
		{
			escreva ("\nO número de resultados encontrados da letra ", busca, " foram ", cont,".\n")
		}
		senao
		{
			escreva ("\nNão foram encontrados resultados no vetor.\n")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 360; 
 */