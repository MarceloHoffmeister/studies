programa
{
	funcao inicio()
	{
		inteiro n=0, i=0, j=0
		real H=1.0, s=1.0

		escreva ("Insira um n�mero: ")
		leia (n)

		limpa ()

		para ( i = 2; i <= n; i++)
		{
			H = H * -1
			s = s + H/i
		}

		escreva ("O valor de H � ", s, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 77; 
 */