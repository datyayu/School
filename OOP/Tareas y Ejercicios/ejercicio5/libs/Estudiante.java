package libs;

import java.util.Scanner;



public class Estudiante extends Persona {
/* Variables de instancia */
  double promedio;


/* Constructor */
  public Estudiante () {}


/* Metodos de instancia */
  /**
   * Captura la informacion del estudiante.
   */
  public void capturarInfo () {
    super.capturarInfo();
    
    Scanner scanner = new Scanner(System.in);
    System.out.print("Promedio: ");
    promedio = scanner.nextDouble();
    scanner.nextLine(); // Limpia el buffer.
  }


  /**
   * Verifica si la persona es mayor de edad o no.
   * @return Si la persona es mayor de 21, verdadero. Falso de lo contrario.
   */
  // No puede ser sobreescrita debido a que el metodo en el padre es final.
  // @Override
  // public boolean esAdulto() {
  //   if (edad >= 21) {
  //     return true;
  //   } else {
  //     return false;
  //   }
  // }


  /**
   * Verifica si el alumno tiene promedio aprobatorio.
   * @return Verdadero si el alumno tiene promedio mayor o igual a 6, 
   *         falso de lo contrario.
   */
  public final boolean esAprobatorio () {
    return promedio >= 6;
  }


  /**
   * Verifica si un promedio pasado como argumento es aprobatorio.
   * @param  prom Promedio a evaluar
   * @return      Verdadero si el promedio es mayor o igual a 6, 
   *              falso de lo contrario.
   */
  public boolean esAprobatorio (double prom) {
    return prom >= 6;
  }

  /**
   * Muestra los datos del alumno.
   */
  public void mostrarInfo() {
    super.mostrarInfo();
    System.out.println("Promedio:  " + promedio);

  }


/* Getters */
  public double getPromedio () {
    return promedio;
  }


/* Setters */
  public void setPromedio (double promedio) {
    this.promedio = promedio;
  }
}