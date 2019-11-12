programa
{
	funcao inicio()
	{
		inteiro h_inicio, min_inicio, h_final, min_final, inicio_total, fim_total, duracao, hora, minutos
		escreva ("Digite a hora de início do jogo: ")
		leia (h_inicio)
		escreva ("\nDigite os minutos: ")
		leia (min_inicio)
		escreva ("\nDigite a hora de término do jogo: ")
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
			escreva ("\nJogo com duração maior do que a permitida. Não é possível calcular.")
			pare
		}

		escreva ("\nA duração do jogo foi de ", hora, " horas e ", minutos, " minutos (", hora, ":", minutos,").\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 524; 
 */