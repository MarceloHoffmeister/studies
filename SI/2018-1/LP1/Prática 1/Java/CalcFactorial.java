import java.util.Scanner;

class CalcFactorial {
	public static int factorial(int n) {
		int result = 0;
		result = (n==1) ? 1 : n * factorial(n-1);
		return result;
	}
	public static void main (String[] args) {
		int fact = 0;
		int i = 0;
		Scanner ler = new Scanner(System.in);
		System.out.println("Digite um número: ");
		i = ler.nextInt();
		fact = factorial(i);
		System.out.println("O fatorial de " + i + " é " + fact + "\n");
	}
}