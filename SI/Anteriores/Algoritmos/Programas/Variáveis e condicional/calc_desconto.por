programa
{
	funcao inicio()
	{
		
		real valor, valor_final
		inteiro cor

		escreva ("Informe o valor do produto: ")
		leia (valor)

		escreva ("Informe a cor da etiqueta:\n")
		escreva ("[1] - azul (20%)\n")
		escreva ("[2] - verde (30%)\n")
		escreva ("[3] - amarelo (40%)\n")
		escreva ("[4] - vermelho (50%)\n")
		leia (cor)

		escolha (cor) {
			caso 1:
			valor_final = valor - (valor * (20.0 / 100.0))
			pare

			caso 2:
			valor_final = valor - (valor * (30.0 / 100.0))
			pare

			caso 3:
			valor_final = valor - (valor * (40.0 / 100.0))
			pare

			caso 4:
			valor_final = valor - (valor * (50.0 / 100.0))
			pare

			caso contrario:
			escreva ("Cor da etiqueta inexistente")
			pare
		}

		escreva ("O valor final do produto com desconto é R$", valor_final,".\n")
		}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 36; 
 */