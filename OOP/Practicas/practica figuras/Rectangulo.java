import java.util.Scanner;


public class Rectangulo extends Figura{
	private double ladoMenor;
	private double ladoMayor;


/* Constructor */
	public Rectangulo () {}

	public Rectangulo (double ladoMenor, double ladoMayor) {
		this.ladoMenor = ladoMenor;
		this.ladoMayor = ladoMayor;
	}


/* Metodos */
	@Override
	public void capturaDatos () {
	    Scanner scanner = new Scanner(System.in);

	    System.out.print("Captura el tamano del lado menor: ");
	    ladoMenor = scanner.nextDouble();
	    System.out.print("Captura el tamano del lado mayor: ");
	    ladoMayor = scanner.nextDouble();
	    scanner.nextLine(); // Limpia el buffer de entrada.
	}

	@Override
	public double calcularArea () {
		return ladoMenor * ladoMayor;
	}

	@Override
	public double calcularPerimetro () {
		return (ladoMenor * 2) + (ladoMayor * 2);
	}

}