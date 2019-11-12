programa
{
	funcao inicio()
	{
		inteiro vetor1[7], vetor2[7], matriz[7][2]

		// prenche vetor1
		para (inteiro i = 0; i < 7; i++) {
			escreva ("Insira um valor de 1 a 9: ")
			leia (vetor1[i])
			limpa()
		}

		escreva ("Novamente ...\n")

		// prenche vetor2
		para (inteiro i = 0; i < 7; i++) {
			escreva ("Insira um valor de 1 a 9: ")
			leia (vetor2[i])
			limpa ()
		}

		// preenche matriz
		para (inteiro i = 0; i < 7; i++) {
			para (inteiro j = 0; j < 2; j++) {
				matriz [i][0] = vetor1[i]
				matriz [i][1] = vetor2[i]
			}
		}

		// exibe matriz
		para (inteiro i = 0; i < 7; i++) {
			para (inteiro j = 0; j < 2; j++) {
				escreva (matriz[i][j])
			}
			escreva (" ")
		}

		escreva ("\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 669; 
 */