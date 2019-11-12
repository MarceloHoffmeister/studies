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
			
			escreva ("Senha inválida!\n")

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
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 175; 
 */