programa
{
	funcao inicio()
	{
		inteiro num, c, d, u, aux
		escreva ("Digite um número maior que 100 e menor que 199: ")
		leia (num)
		c = num / 100
		d = (num % 100) / 10
		u = (num % 100) % 10
		aux = ((c) + (d * 10) + (u * 100)) 
		escreva ("O número digitado ao contrário é: ", u, d, c)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 238; 
 */