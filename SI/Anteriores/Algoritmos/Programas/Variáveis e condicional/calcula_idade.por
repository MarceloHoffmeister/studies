programa
{
	funcao inicio()
	{
		inteiro dia, mes, ano, idade
		escreva ("Digite sua data de nascimento.\n\nDia: ")
		leia (dia)
		escreva ("Mês: ")
		leia (mes)
		escreva ("Ano: ")
		leia (ano)

		idade = ((2016 - ano) * 365) + (mes * 30) + dia

		escreva ("\nVocê tem ", idade, " dias de nascimento.\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 113; 
 */