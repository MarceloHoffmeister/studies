programa
{
	funcao inicio()
	{
		inteiro senha

		escreva ("Insira a senha: ")
		leia (senha)

		
		se (senha == 2002)
		{
			limpa ()
			
			escreva ("Acesso permitido\n")	
		}
		
		enquanto (senha != 2002)
		{
			limpa ()
			
			escreva ("Senha inv�lida!\n")

			escreva ("\nInsira a senha: ")
			leia (senha)

		
			se (senha == 2002)
			{
				limpa ()
				
				escreva ("Acesso permitido\n")	
			}

		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta se��o do arquivo guarda informa��es do Portugol Studio.
 * Voc� pode apag�-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 175; 
 */