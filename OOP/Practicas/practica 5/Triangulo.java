import java.util.*;

public class Triangulo {
/* Atributos de la clase */
  private Scanner scanner;
  private double lado1;
  private double lado2;
  private double lado3;

/* Constructor */
  public Triangulo () {
    inicializar();
  }


/* Metodos */
  /**
   * Inicializa los lados del triangulo valido en base al input del usuario.
   */
  public void inicializar () {
    scanner = new Scanner(System.in);
    boolean trianguloNoEsValido = true;
    
    while ( trianguloNoEsValido ) {
      // Captura el input del usuario.
      System.out.print("Ingrese el primer lado: ");
      lado1 = scanner.nextDouble();
      System.out.print("Ingrese el segundo lado: ");
      lado2 = scanner.nextDouble();
      System.out.print("Ingrese el tercer lado: ");
      lado3 = scanner.nextDouble();

      // Verifica que el triangulo sea valido.
      if ( esTriangulo() ) { 
        trianguloNoEsValido = false; 
      } else {
        System.out.println("Sus lados no corresponden a un triangulo. Intente de nuevo.");
      }
    }
  }

  /**
   * Calcula el lado mayor del triangulo.
   * @return Texto con el lado mayor, si existe. 
   *         Texto indicando que no hay un mayor de lo contrario.
   */
  public String calcularLadoMayor () {
    // Ordena los lados de menor a mayor.
    double[] lados = { lado1, lado2, lado3 };
    Arrays.sort(lados);

    // Si los dos lados mas grandes son iguales, no hay mayor.
    // Si existe un lado mayor, entonces devuelve el que sea mas grande (osea el mayor).
    if (lados[2] == lados[1]) { 
      return "No hay un lado mayor.";
    } else if (lado1 == lados[2]) { 
      return "El lado 1 es el mayor";
    } else if (lado2 == lados[2]) {
      return "El lado 2 es el mayor";
    } else {
      return "El lado 3 es el mayor";
    }
  }

  /**
   * Comprueba si el triangulo es equilatero o no.
   * @return Texto diciendo si es un triangulo equilatero o no.
   */
  public String esEquilatero () {
    // Si es un triangulo.
    if (esTriangulo()) {
      if(lado1 == lado2 && lado1 == lado3) {
        return "Su triangulo es equilatero";
      } else {
        return "Su triangulo no es equilatero";
      }
    } else { // Si no es un triangulo
      return "Sus lados no corresponden a un triangulo";
    }
  }

  /**
   * Comprueba si los lados 1-3 corresponden a un triangulo valido.
   * @return true si los lados corresponden a un triangulo valido, false de lo contrario.
   */
  private boolean esTriangulo () {
    return (lado1+lado2 > lado3) && (lado1+lado3 > lado2) && (lado2+lado3 > lado1);
  }

}
