programa
{

	funcao inicio()
	{
		// declara variáveis
		inteiro resp = 0, n = 0

		// alimenta variável n
		escreva ("Insira um valor inteiro: ")
		leia (n)

		// chama a função ler_inteiro
		resp = ler_inteiro(n)

		// exibe resultado
		escreva ("\nO resultado é ", resp, ".\n")
	}

	// cria a função ler_inteiro
	funcao inteiro ler_inteiro( inteiro n)
	{
		// declara vetor local
		inteiro inteiros[n], tipo1 = 0, tipo2 = 0, cont = 0

		// alimenta vetor e variável cont
		para (inteiro i = 0; i < n; i++)
		{
			escreva ("\nInsira um valor inteiro: ")
			leia (inteiros[i])


		}

		// verifica valores vetor inteiros
		para (inteiro i = 0; i < n; i++)
		{
			se (inteiros[i] % 2 == 0)
			{
				tipo1++
			} senao { tipo2++ }
		}

		// verifica o tipo de retorno da função ler_inteiro
		se (tipo1 > 0 e tipo2 == 0)
		{
			retorne 0
		}
		senao se (tipo2 > 0 e tipo1 == 0)
		{
			retorne 1
		} senao { retorne -1 }
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 590; 
 */