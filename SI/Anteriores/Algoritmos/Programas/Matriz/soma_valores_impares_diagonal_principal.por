programa
{
	funcao inicio()
	{
		
inteiro A[5][5], soma = 0

		// preenche matriz
		para (inteiro i = 0; i < 5; i++) {
			para (inteiro j = 0; j < 5; j++) {
				escreva ("Insira 10 valores para a matriz: ")
				leia (A[i][j])
				limpa()
			}
		}

		// soma valores da diagonal principal
		para (inteiro i = 0; i < 5; i++) {
			para (inteiro j = 0; j < 5; j++){
				se ( j == i ) {
					se ( j % 2 == 0) {
						soma += A[i][j]	
					}
					
				}
			}
		}

		escreva ("A soma dos valores da diagonal principal da matriz A � ", soma, ".\n")
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 427; 
 */