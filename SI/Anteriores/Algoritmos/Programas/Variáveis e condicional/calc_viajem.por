programa
{
	funcao inicio()
	{
		real tempo, vel_media, distancia
		escreva ("Digite o tempo gasto na viajem (em horas): ")
		leia (tempo)
		escreva ("\nDigite a velocidade m�dia usada na viajem: ")
		leia (vel_media)
		distancia = (vel_media / 3.6) * (tempo * 3600.0)
		escreva ("\nA velocidade m�dia do carro era de ", vel_media, "KM/H.")
		escreva ("\nO tempo utilizado foi de ", tempo, "H.")
		escreva ("\nPortanto, a dist�ncia percorrida foi de ", distancia, ".")
		escreva ("\nA quantidade gasta de litros de combust�vel foi de ", distancia / 12, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 467; 
 */