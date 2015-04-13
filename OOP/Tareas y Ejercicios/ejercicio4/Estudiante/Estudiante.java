package Estudiante;
import java.util.Scanner;


public class Estudiante {
/* Variables de instancia */
  final String nombre_alumno = "Alumno";
  double[] calificaciones;


/* Constructor */
  public Estudiante() {
    calificaciones = new double[3];
  }



/* Metodos de clase */


  /**
   * Muestra el promedio de las 3 calificaciones de un estudiante.
   * @param  obj Objeto de tipo Estudiante con las calificaciones a promediar.
   * @return     Promedio de las calificaciones.
   */
  public static double promedio (Estudiante obj) {
    double suma = 0;
    
    for (double calificacion : obj.getCalificaciones()) {
      suma += calificacion;
    }

    return suma / obj.getCalificaciones().length;
  }


  /**
   * Muestra el promedio de las calificaciones pasadas como argumento.
   * @param  califs Calificaciones a promediar.
   * @return                Promedio de las calificaciones.
   */
  public static double promedio (double ... califs) {
    double suma = 0;
    for (double calificacion : califs) {
      suma += calificacion;
    }

    return suma / califs.length;
  }



/*Metodos de instancia */


  /**
   * Captura el nombre y las calificaciones del estudiante.
   */
  public void capturarInfo() {
    Scanner scanner = new Scanner(System.in);

    // No se puede sobreescribrir el nombre debido a que es final 
    // System.out.print("Capture el nombre del estudiante: ");
    // nombre = scanner.nextLine(); 


    // Captura las calificaciones.
    for (int i = 0; i < 3; i++) {
      System.out.print("Capture las calificacion 1: ");
      calificaciones[i] = scanner.nextDouble();
    }
  }


  /**
   * Muestra el nombre y las calificaciones del estudiante.
   */
  public void mostrarCalificaciones () {
    System.out.println("\nCalificaciones de " + nombre_alumno);

    for (double calificacion : calificaciones) {
      System.out.println(calificacion);
    }
  }


/* Getters */
  double[] getCalificaciones() { 
    return calificaciones; 
  }


/* Setters */
  void setCalificaciones (double[] calificaciones) { 
    this.calificaciones = calificaciones; 
  }

}