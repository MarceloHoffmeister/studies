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
			escreva ("Produto não reconhecido!")
		}
		
		escreva ("\nValor do produto?\n")
		leia (val_prod)
		escreva ("\nQual a forma de pagamento?\n")
		escreva ("[1] À vista em dinheiro ou cheque, recebe 10% de desconto.\n
[2] À vista no cartão de crédito, recebe 5% de desconto.\n
[3] Em duas vezes, preço normal de etiqueta sem juros.\n
[4] Em três vezes, preço normal de etiqueta mais juros 10%.\n")
		leia (var)

		escolha (var)
		{
			caso 1:
				valor_final = val_prod - (val_prod * 1.1)
				escreva ("\nO valor de pagamento para ", desc_prod, " é de ", valor_final, " reais.")
				pare
			caso 2:
				valor_final = val_prod - ((5 / 100) * val_prod)
				escreva ("\nO valor de pagamento para ", desc_prod, " é de ", valor_final, " reais.")
				pare
			caso 3:
				valor_final = val_prod / 2
				escreva ("\nO valor de pagamento das parcelas de ", desc_prod, " é de ", valor_final, " reais.")
				pare
			caso 4:
				valor_final = (val_prod / 3) + ((10 / 100) * val_prod)
				escreva ("\nO valor de pagamento das parcelas de ", desc_prod, " é de ", valor_final, " reais.")
				pare
			caso contrario:
				escreva ("\nImpossível calcular valor. Reinicie o processo de comprar.")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 608; 
 */