abstract class Operacao {
	public abstract double calcular(double v1, double v2);
}

class Soma extends Operacao {
	public double calcular(double v1, double v2) {
			return v1 + v2;
		}
}

class Subtracao extends Operacao {
	public double calcular(double v1, double v2) {
			return v1 - v2;
		}
}

class Multiplicacao extends Operacao {
	public double calcular(double v1, double v2) {
			return v1 * v2;
		}
}

class Conta {
	public void calculo(Operacao op, double v1, double v2) {
			System.out.println("Resultado: " + op.calcular(v1, v2));
	}
	public static void main(String args[]) { // A main é estática pois é assim que o java identifica ele para ser executada, um método global
		Conta cont = new Conta();
		cont.calculo(new Soma(), 8.0, 4.0);
		cont.calculo(new Subtracao(), 8.0, 4.0);
		cont.calculo(new Multiplicacao(), 8.0, 4.0);
	}
}