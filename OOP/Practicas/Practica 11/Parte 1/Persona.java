import java.util.Scanner;


public class Persona {
/* Variables */
  static String nombre;
  static String apellidos;
  static int edad;


/* Constructores */
  public Persona () {}

  public Persona (String nombre, String apellidos, int edad) {
    this.nombre    = nombre;
    this.apellidos = apellidos;
    this.edad      = edad;
  }


/* Setters */
  public void setNombre    (String nombre)    { this.nombre = nombre; }
  public void setApellidos (String apellidos) { this.apellidos = apellidos; }  
  public void setEdad      (int    edad)      { this.edad = edad; }


/* Getters */
  public String getNombre    () { return nombre; }
  public String getApellidos () { return apellidos; }
  public int    getEdad      () { return edad; }


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
  }

  public boolean esAdulto () {
    return edad >= 18;
  }

  public void imprimirInfo () {
    System.out.println("Nombre:    " + nombre);
    System.out.println("Apellidos: " + apellidos);
    System.out.println("Edad:      " + edad);
    System.out.println("Adulto:    " + esAdulto());

  }
}