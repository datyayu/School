import java.util.Scanner;

public class Automovil {
	public String color;
	public String modelo;
	public Motor motor;
	public Llanta llanta;
	public Puerta puerta;
	public Transmision transmision;


/* Constructores */
	public Automovil () {
		this.transmision = new Transmision();
		this.motor       = new Motor();
		this.llanta      = new Llanta();
		this.puerta      = new Puerta();

	}

	public Automovil (String modelo, String color) {
		this.modelo      = modelo;
		this.color       = color;
		this.transmision = new Transmision();
		this.motor       = new Motor();
		this.llanta      = new Llanta();
		this.puerta      = new Puerta();
	}

/* Setters */
	public void setColor (String color) {
		this.color = color;
	}

	public void setModelo (String modelo) {
		this.modelo = modelo;
	}

/* Getters */
	public String getColor() {
		return color;
	}

	public String getModelo() {
		return modelo;
	}

	public Motor getMotor() {
		return motor;
	}

	public Llanta getLlanta() {
		return llanta;
	}

	public Puerta getPuerta() {
		return puerta;
	}

	public Transmision getTransmision() {
		return transmision;
	}


/* Metodos */
	/**
	 * Muestra la info completa del automovil.
	 */
	public void mostrarInfo() {
		System.out.println("[ Automovil ]");
		System.out.println("Modelo:         " + modelo);
		System.out.println("Color:          " + color);
		motor.mostrarInfo();
		transmision.mostrarInfo();
		llanta.mostrarInfo();
		puerta.mostrarInfo();
	}

	/**
	 * Capturar todos los datos del automovil.
	 */
	public void capturaDatos() {
		Scanner scanner = new Scanner(System.in);

		System.out.print("Color del auto?: ");
		color = scanner.nextLine();
		System.out.print("Modelo del auto?: ");
		modelo = scanner.nextLine();

		// Captura cada parte por separado.
		motor.capturarDatos();
		transmision.capturarDatos();
		llanta.capturarDatos();
		puerta.capturarDatos();
	}

}