import java.util.Scanner;

public class Gato extends Animal {
/* Constructores */
  public Gato () {
    this.setSonido("Miau!!");
    this.setTipo("gato");
  }
 
  public Gato (String nombre, double peso) {
    this.nombre = nombre;
    this.tipo   = "gato";
    this.sonido = "Miau!!";
    this.peso   = peso;
  }

/* Metodos */
  /**
   * Captura los datos de un gato.
   */
  public void capturarInfo () {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Capture la informacion del nuevo gato: ");
    System.out.println("Nombre del gato: ");
    nombre = scanner.nextLine();
    System.out.println("Peso del gato: ");
    peso = scanner.nextDouble();
  }

  /**
   * Imprime el sonido de un gato.
   */
  public void maullar () {
    hacerSonido();
  }
}