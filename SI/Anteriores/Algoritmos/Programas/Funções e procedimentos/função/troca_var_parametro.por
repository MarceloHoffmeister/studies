programa
{
	funcao inicio()
	{
		// declara as variáveis
		inteiro val1 = 0, val2 = 0

		// preeche as variáveis
		escreva ("Insira um valor: ")
		leia (val1)

		escreva ("Insira outro valor: ")
		leia (val2)

		escreva ("\nVal1 tem valor ", val1, " e Val2 tem valor ", val2, ".\n")
		escreva ("\nProcesso da função ...\n")

		// chama a função
		troca_var(val1, val2)

		
		escreva ("\nAgora Val1 tem valor ", val1, " e Val2 tem valor ", val2, ".\n")
	}

	// cria a função
	funcao inteiro troca_var(inteiro &val1, inteiro &val2)
	{
		inteiro aux = 0

		aux = val1
		val1 = val2
		val2 = aux

	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 440; 
 */