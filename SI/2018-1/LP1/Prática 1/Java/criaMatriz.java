import java.util.Scanner;

class criaMatriz {
	public static int criarMatriz() {
		int tamanho = 0, i, j;
		Scanner ler = new Scanner(System.in);
		System.out.print("Digite o tamanho da matriz: ");
		tamanho = ler.nextInt();
		int [][] matriz = new int[tamanho][tamanho];
		for (i = 0; i < tamanho; i++) {
			for (j = 0; j < tamanho; j++) {
				System.out.print("Digite um valor para a posição [" + i + "][" + j + "] da matriz: ");
				matriz[i][j] = ler.nextInt();
			}
		}
		System.out.println("\n");
		for (i = 0; i < tamanho; i++) {
			for (j = 0; j < tamanho; j++) {
				System.out.print(matriz[i][j] + " ");
			}
			System.out.print("\n");
		}
		return 0;
	}
	public static void main(String[] args) {
		criarMatriz();
	}
}