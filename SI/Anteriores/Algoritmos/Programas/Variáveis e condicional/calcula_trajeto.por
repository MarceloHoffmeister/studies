programa
{
	funcao inicio()
	{
		real km, consumo
		caracter tipo
		escreva ("Informe o percurso percorrido: ")
		leia (km)
		escreva ("\nInforme o tipo do ve�culo: ")
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
			escreva ("\nValor informado incompat�vel!\n")
		}

		escreva ("\nO consumo no percurso percorrido foi de ", consumo, " litros de combust�vel.\n")
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 313; 
 */