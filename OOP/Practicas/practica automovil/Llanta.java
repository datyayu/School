import java.util.Scanner;



public class Llanta {

/* Atributos */
	private double radio;
	private String fabricante;
	private double ancho;


/* Setters */
	public void setRadio(double radio) {
		this.radio = radio;
	}

	public void setFabricante(String fabricante) {
		this.fabricante = fabricante;
	}

	public void setAncho(double ancho) {
		this.ancho = ancho;
	}


/* Getters */
	public double getRadio() {
		return radio;
	}

	public String getFabricante() {
		return fabricante;
	}

	public double getAncho() {
		return ancho;
	}



/* Metodos */
	/**
	 * Muestra la informacion de la llanta..
	 */
	public void mostrarInfo() {
		System.out.println("\n[ Llanta ]");
		System.out.println("Radio:          " + radio);
		System.out.println("Fabricante:     " + fabricante);
		System.out.println("Ancho:          " + ancho);
	}


	/**
	 * Captura la informacion de la llanta.
	 */
	public void capturarDatos() {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Radio de la llata?: ");
		radio = scanner.nextDouble();
		System.out.print("Ancho de la llanta?: ");
		ancho = scanner.nextDouble();
		scanner.nextLine(); // Limpia el buffer.
		System.out.print("Fabricante de la llanta?: ");
		fabricante = scanner.nextLine();
	}

}