programa
{

	funcao inicio()
	{
		// declara vari�veis
		inteiro resp = 0, n = 0

		// alimenta vari�vel n
		escreva ("Insira um valor inteiro: ")
		leia (n)

		// chama a fun��o ler_inteiro
		resp = ler_inteiro(n)

		// exibe resultado
		escreva ("\nO resultado � ", resp, ".\n")
	}

	// cria a fun��o ler_inteiro
	funcao inteiro ler_inteiro( inteiro n)
	{
		// declara vetor local
		inteiro inteiros[n], tipo1 = 0, tipo2 = 0, cont = 0

		// alimenta vetor e vari�vel cont
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

		// verifica o tipo de retorno da fun��o ler_inteiro
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
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 590; 
 */