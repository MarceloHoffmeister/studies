programa
{
	funcao inicio()
	{
		inteiro h_inicio, min_inicio, h_final, min_final, inicio_total, fim_total, duracao, hora, minutos
		escreva ("Digite a hora de in�cio do jogo: ")
		leia (h_inicio)
		escreva ("\nDigite os minutos: ")
		leia (min_inicio)
		escreva ("\nDigite a hora de t�rmino do jogo: ")
		leia (h_final)
		escreva ("\nDigite os minutos: ")
		leia (min_final)

		inicio_total = (h_inicio * 60) + min_inicio
		fim_total = (h_final * 60) + min_final
		duracao = fim_total - inicio_total
		hora = duracao / 60
		minutos = duracao % 60

		se (hora > 24)
		{
			escreva ("\nJogo com dura��o maior do que a permitida. N�o � poss�vel calcular.")
			pare
		}

		escreva ("\nA dura��o do jogo foi de ", hora, " horas e ", minutos, " minutos (", hora, ":", minutos,").\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 524; 
 */