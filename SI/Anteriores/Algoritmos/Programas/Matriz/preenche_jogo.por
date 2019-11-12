programa
{
	funcao inicio()
	{
		inteiro jogo[15][4], soma1 = 0, soma2 = 0, soma3 = 0

		//escreva ("Insira 1 no jogo desejado e 0 para deixar em branco\n\n")

		// preenche a matriz
		para (inteiro i = 1; i < 15; i++) {
				escreva ("Insira 1 no jogo desejado e 0 para deixar em branco\n\n")
				escreva ("Jogo ", i, " | Coluna 1: ")
				leia (jogo[i][1])
				limpa()

				se (jogo[i][1] == 1) {
					soma1+= 1
				}
		}

		para (inteiro i = 1; i < 15; i++) {
				escreva ("Insira 1 no jogo desejado e 0 para deixar em branco\n\n")
				escreva ("Jogo ", i, " | Coluna 2: ")
				leia (jogo[i][2])
				limpa()

				se (jogo[i][2] == 1) {
					soma2+= 1
				}
		}
		
		para (inteiro i = 1; i < 15; i++) {
				escreva ("Insira 1 no jogo desejado e 0 para deixar em branco\n\n")
				escreva ("Jogo ", i, " | Coluna 3: ")
				leia (jogo[i][3])
				limpa()

				se (jogo[i][3] == 1) {
					soma3+= 1
				}
		}

		escreva ("Coluna 1 com ", soma1, ", coluna 2 com ", soma2, " e coluna 3 com ", soma3, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 922; 
 */