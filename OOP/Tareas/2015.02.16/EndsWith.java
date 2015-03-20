import java.util.Scanner;


public class EndsWith {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;
    String subtexto;

    System.out.println("Introduzca una cadena: ");
    texto = scanner.nextLine();
    System.out.println("Introduzca una cadena a buscar en la anterior: ");
    subtexto = scanner.nextLine();

    if ( texto.endsWith(subtexto) ) {
      System.out.print("'" + texto + "' termina con '" + subtexto + "'");
    } else {
      System.out.print("'" + texto + "' no termina con '" + subtexto + "'");
    }
  }

}