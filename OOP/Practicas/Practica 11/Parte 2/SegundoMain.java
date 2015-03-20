public class SegundoMain {

  public static void main(String[] args) {
  // Crea una instancia de cada clase.
    Animal animal = new Animal();
    Gato gato = new Gato();
    
  // Captura la informacion de animal.
    animal.capturarInfo();
    animal.hacerSonido();
    animal.imprimirInfo();

    System.out.println("");
    System.out.println("");

  // Captura la informacion del gato.
    gato.capturarInfo();
    gato.maullar(); 
    gato.imprimirInfo();
  }

}