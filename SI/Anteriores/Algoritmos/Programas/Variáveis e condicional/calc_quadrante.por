programa
{
	funcao inicio()
	{
		inteiro graus, n_voltas
		escreva ("Digite um angulo inteiro: ")
		leia (graus)

		n_voltas = 0

		se (graus > 360 ou ((graus < 0) e (graus < -360)))
		{
			n_voltas = (graus / 360)

			se (n_voltas < 0)
			{
				n_voltas *= -1
			}
			
			graus = graus % 360
		}

		se (graus > 0)
		{
			se (graus > 0 e graus < 90)
			{
				escreva ("\n1� quadrante. ", n_voltas, " voltas. Sentido hor�rio.\n")
			}
			senao se (graus > 90 e graus < 180)
			{
				escreva ("\n2� quadrante. ", n_voltas, " voltas. Sentido hor�rio.\n")
			}
			senao se (graus > 180 e graus < 270)
			{
				escreva ("\n3� quadrante. ", n_voltas, " voltas. Sentido hor�rio.\n")
			}
			senao se (graus > 270 e graus < 360)
			{
				escreva ("\n4� quadrante. ", n_voltas, " voltas. Sentido hor�rio.\n")
			}
		}
		senao se (graus < 0)
		{
			se (graus < 0 e graus < -270)
			{
				escreva ("\n4� quadrante. ", n_voltas, " voltas. Sentido anti-hor�rio.\n")
			}
			senao se (graus > -270 e graus < -180)
			{
				escreva ("\n3� quadrante. ", n_voltas, " voltas. Sentido anti-hor�rio\n")
			}
			senao se (graus > -180 e graus < -90)
			{
				escreva ("\n2� quadrante. ", n_voltas, " voltas. Sentido anti-hor�rio\n")
			}
			senao se (graus > -90 e graus < 0)
			{
				escreva ("\n1� quadrante. ", n_voltas, " voltas. Sentido anti-hor�rio\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1358; 
 */