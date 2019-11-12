interface Operacao {
	public double calcular(double v1, double v2);
}

class Soma implements Operacao {
	public double calcular(double v1, double v2) {
			return v1 + v2;
		}
}

class Subtracao implements Operacao {
	public double calcular(double v1, double v2) {
			return v1 - v2;
		}
}

class Multiplicacao implements Operacao {
	public double calcular(double v1, double v2) {
			return v1 * v2;
		}
}

class ContaI { // ContaI não tem construtor mas herda o construtor do pai raiz, object
	public void calculo(Operacao op, double v1, double v2) {
			System.out.println("Resultado: " + op.calcular(v1, v2));
	}
	public static void main(String args[]) { // A main é estática pois é assim que o java identifica ele para ser executada, um método global
		ContaI cont = new ContaI();
		cont.calculo(new Soma(), 8.0, 4.0);
		cont.calculo(new Subtracao(), 8.0, 4.0);
		cont.calculo(new Multiplicacao(), 8.0, 4.0);
	}
}