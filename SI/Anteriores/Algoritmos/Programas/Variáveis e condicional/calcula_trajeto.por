programa
{
	funcao inicio()
	{
		real km, consumo
		caracter tipo
		escreva ("Informe o percurso percorrido: ")
		leia (km)
		escreva ("\nInforme o tipo do veículo: ")
		leia (tipo)

		escolha (tipo)
		{
			caso ('a'):
			consumo = km / 12.0
			pare

			caso ('b'):
			consumo = km / 9.0
			pare

			caso ('c'):
			consumo = km / 8.0
			pare

			caso contrario:
			escreva ("\nValor informado incompatível!\n")
		}

		escreva ("\nO consumo no percurso percorrido foi de ", consumo, " litros de combustível.\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 313; 
 */