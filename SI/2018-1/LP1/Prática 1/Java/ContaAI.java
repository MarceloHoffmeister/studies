abstract class Operacao {
	protected double res;
	public abstract double calcular(double v1, double v2);
}

interface Impressao {
	public void print();
}

class Soma extends Operacao implements Impressao {
	public double calcular(double v1, double v2) {
			this.res = v1 + v2;
			return this.res;
		}
	public void print () {
		System.out.println("O resultado da soma é: " + this.res);
	}
}

class Subtracao extends Operacao implements Impressao {
	public double calcular(double v1, double v2) {
			this.res = v1 - v2;
			return this.res;
		}
	public void print () {
		System.out.println("O resultado da subtração é: " + this.res);
	}
}

class Multiplicacao extends Operacao implements Impressao {
	public double calcular(double v1, double v2) {
			this.res = v1 * v2;
			return this.res;
		}
	public void print () {
		System.out.println("O resultado da multiplicação é: " + this.res);
	}
}

class ContaAI {
	public void calculo(Operacao op, double v1, double v2) {
		op.calcular(v1, v2);
		((Impressao)op).print();
	}
	public static void main(String args[]) { // A main é estática pois é assim que o java identifica ele para ser executada, um método global
		ContaAI cont = new ContaAI();
		cont.calculo(new Soma(), 8.0, 4.0);
		cont.calculo(new Subtracao(), 8.0, 4.0);
		cont.calculo(new Multiplicacao(), 8.0, 4.0);
	}
}