import java.util.Scanner;


public class Alumno extends Persona {
/* Variables */  
  private String matricula;
  private double promedio;
  private String carrera;


/* Constructores */
  public Alumno() {}

  public Alumno (String nombre, String apellidos, int edad, String rfc, 
                 String curp, String matricula, double promedio, String carrera) {
    super(nombre, apellidos, edad, rfc, curp);
    
    this.promedio  = promedio;
    this.carrera   = carrera;
  }


/* Setters */
  public void setMatricula (String matricula) { this.matricula = matricula; }
  public void setPromedio  (double promedio)  { this.promedio  = promedio;  }
  public void setCarrera   (String carrera)   { this.carrera   = carrera;  }


/* Getters */
  public String getMatricula () { return matricula; }
  public double getPromedio ()  { return promedio; }
  public String getCarrera()  { return carrera; }


/* Metodos */
  // Captura la info del alumno.
  public void capturarInfo () {
    super.capturarInfo();
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Matricula: ");
    matricula = scanner.nextLine();
    // Promedio
    System.out.println("Promedio: ");
    promedio = scanner.nextDouble();
    scanner.nextLine(); // Limpia el buffer.
    // Carrera
    System.out.println("Carrera: ");
    carrera = scanner.nextLine();
  }

  // Imprime si el alumno tiene o no promedio aprobatorio.
  public boolean esAprobado () { 
    return promedio >= 6.0; 
  }

  // Imprime la info del alumno.
  @Override
  public void imprimirInfo () {
    super.imprimirInfo();
    System.out.println("Matricula: " + matricula);
    System.out.println("Promedio:  " + promedio);
    System.out.println("Carrera:   " + carrera);
    System.out.println("Aprobado:  " + esAprobado());
  }
}