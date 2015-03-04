public class Profesor {
/* Atributos del Profesor. */
  private String nombre;
  private String apellidos;
  private int edad;
  private boolean casado;
  private boolean especialista;


/* Constructores */
  /**
   * Inicializa la instancia sin valores. 
   */
  public Profesor () {
  }

  /**
   * Inicializa la instancia con los valores asignados.
   * @param nombre       nombre del profesor
   * @param apellidos    apellidos del profesor
   * @param edad         edad del profesor (en años)
   * @param casado       si el profesor esta casado o no
   * @param especialista si el profesor es especilista o no
   */
  public Profesor (String nombre, String apellidos, int edad, boolean casado, 
                  boolean especialista) {
    this.nombre       = nombre;
    this.apellidos    = apellidos;
    this.edad         = edad;
    this.casado       = casado;
    this.especialista = especialista;
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

  public void setCasado (boolean casado) {
    this.casado = casado;
  }

  public void setEspecialista (boolean especialista) {
    this.especialista = especialista;
  }  


/* Getters */
  public String getNombre () { 
    return nombre;
  } 

  public String getApellidos () {
    return apellidos;
  }

  public int getEdad () { 
    return edad;
  }

  public boolean getCasado () {
    return casado;
  }

  public boolean setEspecialista () {
    return especialista;
  }


/* Metodos */
  /**
   * Imprime los datos de la instancia.
   */
  public void imprimirInfo() {
    System.out.println("Nombre:       " + nombre);
    System.out.println("Apellidos:    " + apellidos);
    System.out.println("Edad:         " + edad);
    System.out.println("Casado:       " + casado);
    System.out.println("Especialista: " + especialista);
  }
}
