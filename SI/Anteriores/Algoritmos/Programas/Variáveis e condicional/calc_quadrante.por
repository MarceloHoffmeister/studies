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
				escreva ("\n1º quadrante. ", n_voltas, " voltas. Sentido horário.\n")
			}
			senao se (graus > 90 e graus < 180)
			{
				escreva ("\n2º quadrante. ", n_voltas, " voltas. Sentido horário.\n")
			}
			senao se (graus > 180 e graus < 270)
			{
				escreva ("\n3º quadrante. ", n_voltas, " voltas. Sentido horário.\n")
			}
			senao se (graus > 270 e graus < 360)
			{
				escreva ("\n4º quadrante. ", n_voltas, " voltas. Sentido horário.\n")
			}
		}
		senao se (graus < 0)
		{
			se (graus < 0 e graus < -270)
			{
				escreva ("\n4º quadrante. ", n_voltas, " voltas. Sentido anti-horário.\n")
			}
			senao se (graus > -270 e graus < -180)
			{
				escreva ("\n3º quadrante. ", n_voltas, " voltas. Sentido anti-horário\n")
			}
			senao se (graus > -180 e graus < -90)
			{
				escreva ("\n2º quadrante. ", n_voltas, " voltas. Sentido anti-horário\n")
			}
			senao se (graus > -90 e graus < 0)
			{
				escreva ("\n1º quadrante. ", n_voltas, " voltas. Sentido anti-horário\n")
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 1358; 
 */