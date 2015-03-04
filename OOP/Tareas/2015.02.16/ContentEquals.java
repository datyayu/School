import java.util.Scanner;


public class ContentEquals {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;
    String subtexto;

    System.out.println("Introduzca una cadena: ");
    texto = scanner.nextLine();
    System.out.println("Introduzca una cadena a comparar con la anterior: ");
    subtexto = scanner.nextLine();

    if ( texto.contentEquals(subtexto) ) {
      System.out.print("'" + texto + "' es igual a '" + subtexto + "'");
    } else {
      System.out.print("'" + texto + "' no es igual a '" + subtexto + "'");
    }
  }

}