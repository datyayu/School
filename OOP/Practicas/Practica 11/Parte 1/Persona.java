import java.util.Scanner;


public class Persona {
/* Variables */
  private String nombre;
  private String apellidos;
  private int edad;
  private String rfc;
  private String curp;


/* Constructores */
  public Persona () {}

  public Persona (String nombre, String apellidos, int edad, String rfc, 
                  String curp) {
    this.nombre    = nombre;
    this.apellidos = apellidos;
    this.edad      = edad;
    this.rfc       = rfc;
    this.curp      = curp;
  }


/* Setters */
  public void setNombre    (String nombre)    { this.nombre = nombre; }
  public void setApellidos (String apellidos) { this.apellidos = apellidos; }  
  public void setEdad      (int    edad)      { this.edad = edad; }
  public void setRfc       (String rfc)       { this.rfc  = rfc; }
  public void setCurp      (String curp)      { this.curp = curp; }


/* Getters */
  public String getNombre    () { return nombre; }
  public String getApellidos () { return apellidos; }
  public int    getEdad      () { return edad; }
  public String getRfc       () { return rfc; }
  public String getCurp      () { return curp; }


/* Metodos */
  // Captura la info de la persona.
  public void capturarInfo () {
    Scanner scanner = new Scanner(System.in);
    
    // Nombre.
    System.out.println("Nombre: ");
    nombre = scanner.nextLine();
    // Apellidos.
    System.out.println("Apellidos: ");
    apellidos = scanner.nextLine();
    // Edad.
    System.out.println("Edad: ");
    edad = scanner.nextInt();
    scanner.nextLine(); // Limpia el buffer.
    // Rfc.
    System.out.println("Rfc: ");
    rfc = scanner.nextLine();
    // Curp.
    System.out.println("Curp: ");
    curp = scanner.nextLine();
  }

  // Imprime la info de la persona.
  public void imprimirInfo () {
    System.out.println("Nombre:    " + nombre);
    System.out.println("Apellidos: " + apellidos);
    System.out.println("Edad:      " + edad);
    System.out.println("Rfc:       " + rfc);
    System.out.println("Curp:      " + curp);
  }
}