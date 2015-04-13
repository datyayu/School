import java.util.Scanner;

class Main {
	

	public static void main(String[] args) {
		int rens;
		int cols;
		int opcion = 1;

		Matriz matrizA;
		Matriz matrizB;
		Scanner scanner = new Scanner(System.in);

		// Captura las dimensiones de la matriz A
		System.out.println("Introduzca el tamano de la matriz A");
		System.out.println("Renglones: ");
		rens = scanner.nextInt();
		System.out.println("Columnas: ");
		cols = scanner.nextInt();
		
		matrizA = new Matriz(rens, cols);

		// Captura las dimensiones de la matriz B
		System.out.println("Introduzca el tamano de la matriz B");
		System.out.println("Renglones: ");
		rens = scanner.nextInt();
		System.out.println("Columnas: ");
		cols = scanner.nextInt();
		matrizB = new Matriz(rens, cols);


		while (opcion != 0) {
			System.out.println("Seleccione: ");
			System.out.println("[1] Mostrar matrices");
			System.out.println("[2] Mostra transpuesta A");
			System.out.println("[3] Mostra transpuesta B");
			System.out.println("[4] A + B");
			System.out.println("[5] A - B");
			System.out.println("[6] A x B");
			System.out.println("[7] B x A");
			opcion = scanner.nextInt();

			switch (opcion) {
				case 0:
					break;
				case 1:
					System.out.println("\nMatriz A");
					Matriz.imprimirMatriz(matrizA);
					System.out.println("\nMatriz B");
					Matriz.imprimirMatriz(matrizB);
					break;
				case 2:
					System.out.println("\n Transpuesta de A");
					Matriz.imprimirMatriz(matrizA.transpuesta());
					break;
				case 3:
					System.out.println("\n Transpuesta de B");
					Matriz.imprimirMatriz(matrizB.transpuesta());
					break;
				case 4:
					System.out.println("\n A + B");
					Matriz.imprimirMatriz(OperacionesBinarias.suma(matrizA, matrizB));
					break;
				case 5:
					System.out.println("\n A - B");
					Matriz.imprimirMatriz(OperacionesBinarias.resta(matrizA, matrizB));
					break;
				case 6:
					System.out.println("\n A x B");
					Matriz.imprimirMatriz(OperacionesBinarias.multiplicacion(matrizA, matrizB));
					break;
				case 7:
					System.out.println("\n B x A");
					Matriz.imprimirMatriz(OperacionesBinarias.multiplicacion(matrizB, matrizA));
					break;
				default:
					System.out.println("Error, opcion incorrecta");
					break;
			}

			if(opcion != 0)
				System.out.println("\n\n\n");

		}
	}
}