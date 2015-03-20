public class Main {

  public static void main(String[] args) {
  // Datos para las instancias.
    String nombre = "Juan";
    String apellidos = "Perez";
    int edad = 30;
    boolean casado = true;
    boolean especialista = false;

  // Crea dos instancias con los mismos datos.
    Profesor profesor1 = new Profesor(nombre, apellidos, edad, casado, 
                                      especialista);

    Profesor profesor2 = new Profesor();
    profesor2.setNombre(nombre);
    profesor2.setApellidos(apellidos);
    profesor2.setEdad(edad);
    profesor2.setCasado(casado);
    profesor2.setEspecialista(especialista);

  // Imprime los datos de ambas instancias.
    System.out.println("Profesor 1:");
    profesor1.imprimirInfo();

    System.out.println("\nProfesor 2:");
    profesor2.imprimirInfo();
  }

}
