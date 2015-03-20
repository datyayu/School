class PrimerMain {

  public static void main(String[] args) {
  // Crea una instancia de Persona y una de Alumno.
    Persona persona = new Persona();    
    Alumno  alumno  = new Alumno();

  // Captura sus datos.
    System.out.println("Capture la informacion de la Persona: ");
    persona.capturarInfo();
    System.out.println("\nCapture la informacion del Alumno: ");
    alumno.capturarInfo();

  // Imprime los datos de cada instancia.
    System.out.println("\n\nPersona :");
    persona.imprimirInfo();
    System.out.println("\n\nAlumno :");
    alumno.imprimirInfo();
  }

}