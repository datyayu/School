class PrimerMain {

  public static void main(String[] args) {
  // Crea una instancia de Persona y una de Alumno.
    Persona persona = new Persona();    
    Alumno  alumno  = new Alumno();
    System.out.println("Capture la informacion de la Persona: ");
    persona.capturarInfo();
    System.out.println("\nPersona :");
    persona.imprimirInfo();

  // Imprime los datos de cada instancia.
    System.out.println("\nCapture la informacion del Alumno: ");
    alumno.capturarInfo();
    System.out.println("\n\nAlumno :");
    alumno.imprimirInfo();
  }

}