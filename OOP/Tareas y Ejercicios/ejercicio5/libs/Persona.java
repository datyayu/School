package libs;

import java.util.Scanner;



public class Persona {
/* Variables de instancia */
  String nombre;
  String apellidos;
  int edad;


/* Constructor */
  public Persona () {}


/* Metodos de instancia */
  /**
   * Captura la informacion de la persona.
   */
  public void capturarInfo () {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Capture su informacion ");
    System.out.print("Nombre: ");
    nombre = scanner.nextLine();
    System.out.print("Apellidos: ");
    apellidos = scanner.nextLine();
    System.out.print("Edad: ");
    edad = scanner.nextInt();
    scanner.nextLine(); // Limpia el buffer.
  }


  /**
   * Muestra los datos de la persona, junto con si es adulto o no.
   */
  public void mostrarInfo() {
    System.out.println("Nombre:    " + nombre);
    System.out.println("Apellidos: " + apellidos);
    System.out.println("Edad:      " + edad);
    
    if (esAdulto()) {
      System.out.println("Es mayor de edad");
    } else {
      System.out.println("Es menor de edad");
    }
  }


  /**
   * Verifica si la persona es mayor de edad o no.
   * @return Si la persona es mayor de 18, verdadero. Falso de lo contrario.
   */
  public final boolean esAdulto() {
    if (edad >= 18) {
      return true;
    } else {
      return false;
    }
  }


/* Getters */
  public String getNombre () {
    return nombre;
  }

  public String getApellidos () {
    return apellidos;
  }

  public int getEdad() {
    return edad;
  }


/* Setters */
  public void setNombre (String nombre) {
    this.nombre = nombre;
  }  

  public void setApellidos (String apellidos) {
    this.apellidos = apellidos;
  }

  public void setEdad (int edad) {
    this.edad = edad;
  }
  
}