programa
{
	funcao inicio()
	{
		inteiro n=0, i=0, j=0
		real H=1.0, s=1.0

		escreva ("Insira um número: ")
		leia (n)

		limpa ()

		para ( i = 2; i <= n; i++)
		{
			H = H * -1
			s = s + H/i
		}

		escreva ("O valor de H é ", s, ".\n")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 77; 
 */