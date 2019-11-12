programa
{
	funcao inicio()
	{
		real tempo, vel_media, distancia
		escreva ("Digite o tempo gasto na viajem (em horas): ")
		leia (tempo)
		escreva ("\nDigite a velocidade média usada na viajem: ")
		leia (vel_media)
		distancia = (vel_media / 3.6) * (tempo * 3600.0)
		escreva ("\nA velocidade média do carro era de ", vel_media, "KM/H.")
		escreva ("\nO tempo utilizado foi de ", tempo, "H.")
		escreva ("\nPortanto, a distância percorrida foi de ", distancia, ".")
		escreva ("\nA quantidade gasta de litros de combustível foi de ", distancia / 12, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 467; 
 */