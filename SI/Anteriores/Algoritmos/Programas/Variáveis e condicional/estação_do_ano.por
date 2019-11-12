programa
{
	funcao inicio()
	{
		inteiro n
		escreva ("Escolha a estação\n")
		escreva ("[1] primavera\n[2] verão\n[3] outono\n[4] inverno")
		escreva ("\n\nDigite um valor: ")
		leia (n)

		escolha (n)
		{
			caso 1:
		 	 escreva ("\nÉ primavera!")
		 	 pare
			caso 2:
		 	 escreva ("\nÉ verão!")
		 	 pare
			caso 3:
		 	 escreva ("\nÉ outono!")
		 	 pare
			caso 4:
		 	 escreva ("\nÉ inverno!")
		 	 pare
			caso contrario:
		 	 escreva ("\nOpção inválida! Escolha números de 1 a 4.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 249; 
 */