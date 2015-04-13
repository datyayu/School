import java.util.Scanner;


public class IsEmpty {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;

    System.out.println("Introduzca algo: ");
    texto = scanner.nextLine();

    if ( texto.isEmpty() ) {
      System.out.println("Usted introdujo una cadena de texto vacia");
    } else {
      System.out.println("Usted introdujo una cadena de texto valida");
    }
  }

}