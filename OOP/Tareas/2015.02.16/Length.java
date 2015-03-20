import java.util.Scanner;


public class Length {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;

    System.out.println("Introduzca una cadena de texto: ");
    texto = scanner.nextLine();

    System.out.println("Su cadena, fue de " + texto.length() + " caracteres.");
  }

}