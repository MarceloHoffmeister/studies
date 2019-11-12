programa
{
	funcao inicio()
	{
		
		caracter vetor[10], busca
		inteiro cont = 0, j = 0, posix[10]

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
			{
				cont++
				posix[j] = 1
				j++				
			}
			senao
				posix[i] = 0
		}

		//exibe o resultado
		se (cont > 0)
		{
			limpa()
			
			escreva ("O número de resultados encontrados da letra ", busca, " foram ", cont,".\n")

			escreva ("\nEles aparecem na posição ")
			
			para ( inteiro i = 0; i < 10; i++)
			{
				se (posix[i] == 1)
					escreva ("[", i, "] ")
			}

			escreva ("do vetor.\n")
		}
		senao
		{
			limpa()
			
			escreva ("Não foram encontrados resultados no vetor.\n")
		}
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 813; 
 */