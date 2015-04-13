import Estudiante.*;

public class Main {

  public static void main(String[] args) {
  // Instancia cada estudiante.
    Estudiante estudiante1 = new Estudiante();
    Estudiante estudiante2 = new Estudiante();
    Estudiante estudiante3 = new Estudiante();

  // Captura estudiante 1
    System.out.println("Estudiante 1");
    estudiante1.capturarInfo();
    estudiante1.mostrarCalificaciones();
  // Captura estudiante 3
    System.out.println("\nEstudiante 2");
    estudiante2.capturarInfo();
    estudiante1.mostrarCalificaciones();
    estudiante2.mostrarCalificaciones();
  // Captura estudiante 3
    System.out.println("\nEstudiante 3");
    estudiante3.capturarInfo();
    estudiante1.mostrarCalificaciones();
    estudiante2.mostrarCalificaciones();
    estudiante3.mostrarCalificaciones();

  // Calcula los promedios individuales
    double prom1 = Estudiante.promedio(estudiante1);
    double prom2 = Estudiante.promedio(estudiante2);
    double prom3 = Estudiante.promedio(estudiante3);

  // Muesta el promedio total de ese grupo.
    double promTotal = Estudiante.promedio(prom1, prom2, prom3);
    System.out.println("\n\nLa calificacion promedio de los 3 estudiantes es: " + promTotal);
  }
}