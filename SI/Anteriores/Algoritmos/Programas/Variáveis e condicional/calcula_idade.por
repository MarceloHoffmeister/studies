programa
{
	funcao inicio()
	{
		inteiro dia, mes, ano, idade
		escreva ("Digite sua data de nascimento.\n\nDia: ")
		leia (dia)
		escreva ("M�s: ")
		leia (mes)
		escreva ("Ano: ")
		leia (ano)

		idade = ((2016 - ano) * 365) + (mes * 30) + dia

		escreva ("\nVoc� tem ", idade, " dias de nascimento.\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 113; 
 */