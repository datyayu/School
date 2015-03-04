import java.util.Scanner;


public class ToUpperCase {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;

    System.out.println("Introduzca una cadena con minusculas: ");
    texto = scanner.nextLine();

    System.out.print("Su cadena en mayusculas es : " + texto.toUpperCase());
 
  }

}