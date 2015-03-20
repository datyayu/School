import java.util.Scanner;


public class ToLowerCase {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;

    System.out.println("Introduzca una cadena con mayusculas: ");
    texto = scanner.nextLine();

    System.out.print("Su cadena en minusculas es : " + texto.toLowerCase());
 
  }

}