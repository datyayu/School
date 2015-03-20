import java.util.Scanner;

public class Motor {

/* Atributos */
	private int cilindros;
	private String fabricante;
	private double potencia;


/* Setters */
	public void setCilindros(int cilindros) {
		this.cilindros = cilindros;
	}

	public void setFabricante(String fabricante) {
		this.fabricante = fabricante;
	}

	public void setPotencia(double potencia) {
		this.potencia = potencia;
	}


/* Getters */
	public int getCilindros() {
		return cilindros;
	}

	public String getFabricante() {
		return fabricante;
	}

	public double getPotencia() {
		return potencia;
	}

/* Metodos */
	/**
	 * Muestra la informacion del motor
	 */
	public void mostrarInfo() {
		System.out.println("\n[ Motor ]");
		System.out.println("Cilindros:      " + cilindros);
		System.out.println("Potencia:       " + potencia);
		System.out.println("Fabricante:     " + fabricante);
	}

	/**
	 * Captura la informacion del motor.
	 */
	public void capturarDatos() {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Cilindros del motor?: ");
		cilindros = scanner.nextInt();
		System.out.print("Potencia del motor?: ");
		potencia = scanner.nextDouble();
		scanner.nextLine(); // Limpia el buffer.
		System.out.print("Fabricante del motor?: ");
		fabricante = scanner.nextLine();
	}
}