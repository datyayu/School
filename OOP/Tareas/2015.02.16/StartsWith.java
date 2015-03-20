import java.util.Scanner;


public class StartsWith {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;
    String subtexto;

    System.out.println("Introduzca una cadena: ");
    texto = scanner.nextLine();
    System.out.println("Introduzca una cadena a buscar en la anterior: ");
    subtexto = scanner.nextLine();

    if ( texto.startsWith(subtexto) ) {
      System.out.print("'" + texto + "' comienza con '" + subtexto + "'");
    } else {
      System.out.print("'" + texto + "' no comienza con '" + subtexto + "'");
    }
  }

}