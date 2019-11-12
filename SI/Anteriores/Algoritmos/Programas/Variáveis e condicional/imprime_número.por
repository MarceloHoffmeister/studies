programa
{
	funcao inicio()
	{
		inteiro n, n2
		escreva ("Entre com um número maior que zero: \n")
		leia (n)
		
		se (n < 0)
		{
			escreva ("\nNúmero inválido!\n")

		}

		n2 = n % 10

		escolha (n2)
		{
			caso 0:
				escreva ("\nNúmero termina com dígito zero")
				pare
			caso 1:
				escreva ("\nNúmero termina com digito 1")
				pare
			caso 2:
				escreva ("\nNúmero termina com dígito dois")
				pare
			caso 3:
				escreva ("\nNúmero termina com dígito 3")
				pare
			caso 4:
				escreva ("\nNúmero termina com dígito quatro")
				pare
			caso 5:
				escreva ("\nNúmero termina com dígito 5")
				pare
			caso 6:
				escreva ("\nNúmero termina com dígito seis")
				pare
			caso 7:
				escreva ("\nNúmero termina com dígito 7")
				pare
			caso 8:
				escreva ("\nNúmero termina com dígito oito")
				pare
			caso 9:
				escreva ("\nNúmero termina com dígito 9")
				pare
			caso contrario:
				escreva ("\nEntrada inválida!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 172; 
 */