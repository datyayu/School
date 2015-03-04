import java.util.*;

class Main {
	public static void main(String[] args) {
		int numEstudiantes = 3;

		Scanner scanner = new Scanner(System.in);
		Student estudiantes[] = new Student[numEstudiantes];

		// Inicializa cada estudiante.
		for(int i = 0; i < numEstudiantes; i++) {
			estudiantes[i] = new Student();
		}

		// Captura los datos de cada estudiante.
		for(int i = 0; i < numEstudiantes; i++) {
			// Numero de estudiante.
			System.out.println("\nEstudiante #" + (i+1));

			// Nombre
			System.out.println("Captura tu nombre");
			estudiantes[i].setNombre(scanner.nextLine());
			
			// Matricula
			System.out.println("Captura tu matricula");
			estudiantes[i].setMatricula(scanner.next());
			
			// Edad
			System.out.println("Captura tu edad");
			estudiantes[i].setEdad(scanner.nextInt());
			scanner.nextLine();
		}

		System.out.println("\n\nNombre - Matricula - Edad");

		// Imprime los datos de cada estudiante.
		for(int i = 0; i < numEstudiantes; i++) {
			// Nombre
			System.out.print(estudiantes[i].getNombre());
			// Matricula
			System.out.print(" - " + estudiantes[i].getMatricula());
			// Edad
			System.out.println(" - " + estudiantes[i].getEdad());
		}
	}
}