import libs.*;

public class Main {

  public static void main(String[] args) {  
  // Instancia 3 estudiantes
    Estudiante estudiante1 = new Estudiante();
    Estudiante estudiante2 = new Estudiante();
    Estudiante estudiante3 = new Estudiante();
  
  
  // Capturar la informacion.
    System.out.println("\nEstudiante 1:");
    estudiante1.capturarInfo(); 
    System.out.println("\nEstudiante 2:");
    estudiante2.capturarInfo(); 
    System.out.println("\nEstudiante 3:");
    estudiante3.capturarInfo(); 


  // Mostrar la informacion.
    System.out.println("\n\nEstudiante 1:");
    estudiante1.mostrarInfo();
    System.out.println("\nEstudiante 2:");
    estudiante2.mostrarInfo();
    System.out.println("\nEstudiante 3:");
    estudiante3.mostrarInfo();


  // Promedio aleatorio.
    double promedio = 6.7;
    System.out.print("\n\nEl promedio " + promedio);
    if (estudiante1.esAprobatorio(promedio)) {
      System.out.println(" es aprobatorio");
    } else {
      System.out.println(" no es aprobatorio");
    }

  }

}