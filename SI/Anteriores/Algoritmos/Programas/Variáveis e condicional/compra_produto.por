programa
{
	funcao inicio()
	{
		inteiro var
		cadeia desc_prod
		real val_prod, valor_final
		escreva ("Produto adquirido?\n")
		leia (desc_prod)

		se (desc_prod == "")
		{
			escreva ("Produto n�o reconhecido!")
		}
		
		escreva ("\nValor do produto?\n")
		leia (val_prod)
		escreva ("\nQual a forma de pagamento?\n")
		escreva ("[1] � vista em dinheiro ou cheque, recebe 10% de desconto.\n
[2] � vista no cart�o de cr�dito, recebe 5% de desconto.\n
[3] Em duas vezes, pre�o normal de etiqueta sem juros.\n
[4] Em tr�s vezes, pre�o normal de etiqueta mais juros 10%.\n")
		leia (var)

		escolha (var)
		{
			caso 1:
				valor_final = val_prod - (val_prod * 1.1)
				escreva ("\nO valor de pagamento para ", desc_prod, " � de ", valor_final, " reais.")
				pare
			caso 2:
				valor_final = val_prod - ((5 / 100) * val_prod)
				escreva ("\nO valor de pagamento para ", desc_prod, " � de ", valor_final, " reais.")
				pare
			caso 3:
				valor_final = val_prod / 2
				escreva ("\nO valor de pagamento das parcelas de ", desc_prod, " � de ", valor_final, " reais.")
				pare
			caso 4:
				valor_final = (val_prod / 3) + ((10 / 100) * val_prod)
				escreva ("\nO valor de pagamento das parcelas de ", desc_prod, " � de ", valor_final, " reais.")
				pare
			caso contrario:
				escreva ("\nImposs�vel calcular valor. Reinicie o processo de comprar.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 608; 
 */