import java.util.Scanner;

public class Animal {
  String nombre;
  String tipo;
  String sonido;
  double peso;

/* Constructores */
  public Animal () {}

  public Animal(String tipo, String nombre, String sonido, double peso) {
    this.tipo   = tipo;
    this.nombre = nombre;
    this.sonido = sonido;
    this.peso   = peso;
  }

/* Setters */
  public void setNombre (String nombre) { this.nombre = nombre; }
  public void setSonido (String sonido) { this.sonido = sonido; }
  public void setTipo   (String tipo)   { this.tipo = tipo; }
  public void setPeso   (double peso)   { this.peso = peso; }


/* Getters */
  public String getSonido () { return sonido; }
  public String getNombre () { return nombre; }
  public String getTipo   () { return tipo; }
  public double getPeso   () { return peso; }


/* Metodos */
  /**
   * Captura los datos de un animal.
   */
  public void capturarInfo () {
    Scanner scanner = new Scanner(System.in);
    
    System.out.println("Capture la informacion del nuevo animal: ");
    System.out.println("Tipo de animal: ");
    tipo = scanner.nextLine();
    System.out.println("Nombre del animal: ");
    nombre = scanner.nextLine();
    System.out.println("Peso del animal: ");
    peso = scanner.nextDouble();
    scanner.nextLine(); // Limpia el buffer.
    System.out.println("Sonido del animal: ");
    sonido = scanner.nextLine();
  }

  /**
   * Imprime el sonido del animal.
   */
  public void hacerSonido () {
    System.out.println(sonido);
  }

  /**
   * Imprime todos los datos del animal.
   */
  public void imprimirInfo () {
    System.out.println("Nombre: " + nombre);
    System.out.println("Tipo:   " + tipo);
    System.out.println("Sonido: " + sonido);
    System.out.println("Peso:   " + peso + "kg");
  }
}