programa
{
	funcao inicio()
	{
		// declara as vari�veis
		inteiro val1 = 0, val2 = 0

		// preeche as vari�veis
		escreva ("Insira um valor: ")
		leia (val1)

		escreva ("Insira outro valor: ")
		leia (val2)

		escreva ("\nVal1 tem valor ", val1, " e Val2 tem valor ", val2, ".\n")
		escreva ("\nProcesso da fun��o ...\n")

		// chama a fun��o
		troca_var(val1, val2)

		
		escreva ("\nAgora Val1 tem valor ", val1, " e Val2 tem valor ", val2, ".\n")
	}

	// cria a fun��o
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
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 440; 
 */