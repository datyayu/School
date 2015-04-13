import java.util.Scanner;


public class Puerta {
/* Atributos */
    private String tipoDeCerradura;
    private String fabricante;

/* Setters */
    public void setTipoDeCerradura(String tipoDeCerradura) {
        this.tipoDeCerradura = tipoDeCerradura;
    }
    public void setFabricante(String fabricante) {
        this.fabricante = fabricante;
    }
    
/* Getters */
    public String getTipoDeCerradura() {
        return tipoDeCerradura;
    }
    public String getFabricante() {
        return fabricante;
    }
    
/* Metodos */
    /**
    * Muestra la informacion de la puerta.
    */
    public void mostrarInfo() {
        System.out.println("\n[ Puerta ]");
        System.out.println("Cerradura: " + tipoDeCerradura);
        System.out.println("Fabricante: " + fabricante);
    }
    
    /**
     Captura la informacion de la puerta.
    */
    public void capturarDatos() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Tipo de cerradura de la puerta?: ");
        tipoDeCerradura = scanner.nextLine();
        System.out.print("Fabricante de la puerta?: ");
        fabricante = scanner.nextLine();
    }
}