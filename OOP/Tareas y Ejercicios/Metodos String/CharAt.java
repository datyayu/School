import java.util.Scanner;


public class CharAt {
  
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String texto;
    int posicion;

    System.out.println("Introduzca algo: ");
    texto = scanner.nextLine();
    System.out.println("Introduzca una posicion de la cadena");
    posicion = scanner.nextInt();

    if ( posicion >= 0 && posicion < texto.length() ) {
      System.out.print("Su caracter en la posicion " + posicion + " es: ");
      System.out.println( texto.charAt(posicion) );
    } else {
      System.out.println("Su posicion no es valida.");
    }
  }

}