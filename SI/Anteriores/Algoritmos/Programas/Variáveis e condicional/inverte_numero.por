programa
{
	funcao inicio()
	{
		inteiro num, c, d, u, aux
		escreva ("Digite um n�mero maior que 100 e menor que 199: ")
		leia (num)
		c = num / 100
		d = (num % 100) / 10
		u = (num % 100) % 10
		aux = ((c) + (d * 10) + (u * 100)) 
		escreva ("O n�mero digitado ao contr�rio �: ", u, d, c)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 238; 
 */