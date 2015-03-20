public class Perro extends Animal {

/* Constructores */
  public Perro () {
    this.setSonido("Guau!!");
    this.setTipo("perro");
  }
 
  public Perro (String nombre, double peso) {
    this.tipo   = "perro";
    this.sonido = "Guau!!";

    this.nombre = nombre;
    this.peso   = peso;
  }

/* Metodos */
  public void ladrar () {
    hacerSonido();
  }
}