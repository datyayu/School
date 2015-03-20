public class Menu {
	private String[] opciones = {
		"Rectangulo",
		"Cuadrado",
		"Circulo"
	};

/* Constructor */
	public Menu () {}

/* Metodos */
	public void mostrarMenu () {
		for (int i = 0; i < opciones.length; i++) {
			System.out.println("[" + i + "] " + opciones[i]);
		}
	}

	public void correMetodo (int index) {
		if (index == 0) {
			calcularRectangulo();
		} else if (index == 1) {
			calcularCuadrado();
		} else if (index == 2) {
			calcularCirculo();
		}
	}

	public void calcularRectangulo() {
		Rectangulo rect = new Rectangulo();
		rect.capturaDatos();
		rect.imprimeDatos();
	}

	public void calcularCuadrado() {
		Cuadrado cuad = new Cuadrado();
		cuad.capturaDatos();
		cuad.imprimeDatos();
	}
	
	public void calcularCirculo() {
		Circulo circ = new Circulo();
		circ.capturaDatos();
		circ.imprimeDatos();
	}



}