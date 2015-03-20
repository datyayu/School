import java.util.Scanner;


public class Circulo extends Figura{
	private double radio;

/* Constructores */
	public Circulo () { }

	public Circulo (int radio) {
		this.radio = radio;
	}

/* Metodos */
	@Override 
	public void capturaDatos () {
	    Scanner scanner = new Scanner(System.in);

	    System.out.print("Captura el tamano del radio: ");
	    radio = scanner.nextDouble();
	    scanner.nextLine(); // Limpia el buffer de entrada.
	}

	@Override
	public double calcularArea () {
		return Math.PI * radio * radio;
	}

	@Override
	public double calcularPerimetro () {
		return Math.PI * radio * 2;
	}

}