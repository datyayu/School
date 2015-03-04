import java.util.Scanner;


public class Concat {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;
    String subtexto;

    System.out.println("Introduzca una cadena: ");
    texto = scanner.nextLine();
    System.out.println("Introduzca una concatenar con la anterior: ");
    subtexto = scanner.nextLine();

    System.out.print("Su cadena final es : " + texto.concat(subtexto));
 
  }

}