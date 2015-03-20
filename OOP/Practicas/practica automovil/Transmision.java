import java.util.Scanner;


public class Transmision {

/* Atributos */
	private String tipo;
	private String fabricante;
	private int numCambios;



/* Setters */
	public void setTipo(String tipo) {
		this.tipo = tipo;
	}

	public void setFabricante(String fabricante) {
		this.fabricante = fabricante;
	}

	public void setNumCambios(int numCambios) {
		this.numCambios = numCambios;
	}



/* Getters */
	public String getTipo() {
		return tipo;
	}

	public String getFabricante() {
		return fabricante;
	}

	public int getNumCambios() {
		return numCambios;
	}



/* Metodos */
	/**
	 * Muestra la informacion de la transmision.
	 */
	public void mostrarInfo() {
		System.out.println("\n[ Transmision ]");
		System.out.println("Tipo:           " + tipo);
		System.out.println("numCambios:     " + numCambios);
		System.out.println("Fabricante:     " + fabricante);
	}


	/**
	 * Captura la informacion de la transmision.
	 */
	public void capturarDatos() {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Tipo de transmision?: ");
		tipo = scanner.nextLine();
		System.out.print("Numero de cambios: ");
		numCambios = scanner.nextInt();
		scanner.nextLine(); // Limpia el buffer.
		System.out.print("Fabricante de la transmision?: ");
		fabricante = scanner.nextLine();
	}
}