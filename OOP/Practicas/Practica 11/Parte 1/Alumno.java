import java.util.Scanner;


public class Alumno extends Persona {
/* Variables */  
  private String matricula;
  private double promedio;
  private int semestre;


/* Constructores */
  public Alumno() {}

  public Alumno (String nombre, String apellidos, int edad, 
                 String matricula, double promedio, int semestre) {
    this.nombre    = nombre;
    this.apellidos = apellidos;
    this.edad      = edad;
    this.matricula = matricula;
    this.promedio  = promedio;
    this.semestre  = semestre;
  }


/* Setters */
  public void setMatricula (String matricula) { this.matricula = matricula; }
  public void setPromedio  (double promedio)  { this.promedio  = promedio;  }
  public void setSemestre  (int    semestre)  { this.semestre  = semestre;  }


/* Getters */
  public String getMatricula () { return matricula; }
  public double getPromedio ()  { return promedio; }
  public int    getSemestre ()  { return semestre; }


/* Metodos */
  public void capturarInfo () {
    Scanner scanner = new Scanner(System.in);
    
    // Nombre
    System.out.println("Nombre: ");
    nombre = scanner.nextLine();
    // Apellidos.
    System.out.println("Apellidos: ");
    apellidos = scanner.nextLine();
    // Edad
    System.out.println("Edad: ");
    edad = scanner.nextInt();
    scanner.nextLine(); // Limpia el buffer.
    // Matricula
    System.out.println("Matricula: ");
    matricula = scanner.nextLine();
    // Promedio
    System.out.println("Promedio: ");
    promedio = scanner.nextDouble();
    scanner.nextLine(); // Limpia el buffer.
    // Semestre
    System.out.println("Semestre: ");
    semestre = scanner.nextInt();
    scanner.nextLine(); // Limpia el buffer.
  }


  public boolean esAprobado () { 
    return promedio >= 6.0; 
  }


  public void imprimirInfo () {
    super.imprimirInfo();
    System.out.println("Matricula: " + matricula);
    System.out.println("Semestre:  " + semestre);
    System.out.println("Promedio:  " + promedio);
    System.out.println("Aprobado:  " + esAprobado());
  }
}