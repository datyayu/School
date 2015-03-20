import java.util.Scanner;


class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		Menu menu = new Menu();
		menu.mostrarMenu();

		System.out.print("Seleccione: ");
		int opcion = scanner.nextInt();

		menu.correMetodo(opcion);

	}

}