public class Main {

  public static void main(String[] args) {
  // Crea un nuevo triangulo.
    Triangulo triangulo = new Triangulo();

  // Imprime el lado mayor.
    System.out.println(triangulo.calcularLadoMayor());

  // Imprime si el triangulo es equilatero.
    System.out.println(triangulo.esEquilatero());
  }
}
