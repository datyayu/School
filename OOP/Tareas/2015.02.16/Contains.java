import java.util.Scanner;


public class Contains {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;
    String subtexto;

    System.out.println("Introduzca una cadena: ");
    texto = scanner.nextLine();
    System.out.println("Introduzca una cadena a buscar en la anterior: ");
    subtexto = scanner.nextLine();

    if ( texto.contains(subtexto) ) {
      System.out.print("'" + texto + "' contiene '" + subtexto + "'");
    } else {
      System.out.print("'" + texto + "' no contiene '" + subtexto + "'");
    }
  }

}