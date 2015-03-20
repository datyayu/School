import java.util.Scanner;

public class Cuadrado extends Figura {
	private double lado;

/* Constructores */
	public Cuadrado () { }

	public Cuadrado (double lado) {
		this.lado = lado;
	}

/* Metodos */
	@Override
	public void capturaDatos () {
	    Scanner scanner = new Scanner(System.in);

	    System.out.print("Captura el tamano de un lado: ");
	    lado = scanner.nextDouble();
	    scanner.nextLine(); // Limpia el buffer de entrada.
	}

	@Override
	public double calcularArea () {
		return lado * lado;
	}

	@Override
	public double calcularPerimetro () {
		return lado * 4;
	}

}