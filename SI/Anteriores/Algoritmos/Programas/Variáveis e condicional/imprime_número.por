programa
{
	funcao inicio()
	{
		inteiro n, n2
		escreva ("Entre com um n�mero maior que zero: \n")
		leia (n)
		
		se (n < 0)
		{
			escreva ("\nN�mero inv�lido!\n")

		}

		n2 = n % 10

		escolha (n2)
		{
			caso 0:
				escreva ("\nN�mero termina com d�gito zero")
				pare
			caso 1:
				escreva ("\nN�mero termina com digito 1")
				pare
			caso 2:
				escreva ("\nN�mero termina com d�gito dois")
				pare
			caso 3:
				escreva ("\nN�mero termina com d�gito 3")
				pare
			caso 4:
				escreva ("\nN�mero termina com d�gito quatro")
				pare
			caso 5:
				escreva ("\nN�mero termina com d�gito 5")
				pare
			caso 6:
				escreva ("\nN�mero termina com d�gito seis")
				pare
			caso 7:
				escreva ("\nN�mero termina com d�gito 7")
				pare
			caso 8:
				escreva ("\nN�mero termina com d�gito oito")
				pare
			caso 9:
				escreva ("\nN�mero termina com d�gito 9")
				pare
			caso contrario:
				escreva ("\nEntrada inv�lida!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 172; 
 */