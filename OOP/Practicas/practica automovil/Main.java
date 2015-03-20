import java.util.Scanner;



class Main {

	public static void main(String[] args) {
		int opcion;
		boolean programaActivo = true;
		
		Scanner scanner = new Scanner(System.in);
		Automovil auto = new Automovil();


	/* Menu loop */
		while (programaActivo) {
		// Muestra el menu
			System.out.println("\nSeleccione una opcion: ");
			System.out.println("[0] Salir");
			System.out.println("[1] Capturar/modificar info del auto");
			System.out.println("[2] Mostrar info del auto");

		// Captura la opcion del usuario.	
			opcion = scanner.nextInt();
			scanner.nextLine(); // Limpia el buffer.


		// Ejecuta la opcion del usuario:
			// [0] - Sal de programa.
			if (opcion == 0) {
				programaActivo = false;
			} 

			// [1] - Captura la info.
			else if (opcion == 1) {
				auto.capturaDatos();
			} 

			// [2] - Muestra la info
			else if (opcion == 2) {

				// Asegura que se haya capturado info primero.				
				if (auto.getColor() != null) {
					auto.mostrarInfo();
				} 
				
				// De lo contrario muestra un error.
				else {
					System.out.println("Debe capturar la informacion primero!!");
				}
			
			}

			// Otros - Muestra un error.
			else {
				System.out.println("opcion invalida, intente de nuevo");
			}
		
		} // while(programaActivo)
	
	} // main

}
