import java.util.Random;

public class Matriz {
	
/* Variables de instancia */
  private int[][] matriz;
  private int rens;
  private int cols;


/* Constructor */
  public Matriz (int rens, int cols) {
		this.matriz = new int[rens][cols];
		this.rens = rens;
		this.cols = cols;
		setMatriz();
  }

  public Matriz (int[][] matriz) {
		this.matriz = matriz.clone();
		this.rens = matriz.length;
		this.cols = matriz[0].length;
  }


/* Setter */
  public void setMatriz() {
		Random random = new Random();

		for (int i = 0; i < rens; i++){
		  for (int j = 0; j < cols; j++) {
				matriz[i][j] = random.nextInt(10);
		  }
		}
  }
	

/* Getters */
  public int[][] getMatriz() {
		return matriz;
  }

  public int getRens() {
  	return rens;
  }

  public int getCols() {
  	return cols;
  }


/* Metodos de clase */
  /**
   * Imprime una matriz pasada como argumento
   * @param mat Objeto de tip Matriz a imprimir
   */
	public static void imprimirMatriz(Matriz mat) {
		int[][] matriz = mat.getMatriz();
		int rens = mat.getRens();
		int cols = mat.getCols();

		for (int i = 0; i < rens; i++){
		  for (int j = 0; j < cols; j++) {
		  	System.out.print("[" + matriz[i][j] + "]\t");
		  }
		  System.out.println("");
		}
	}


/* Metodos de instancia */
  /**
   * Retorna la transpuesta de la matriz
   * @return Matriz Instancia del objeto matriz
   */
	public Matriz transpuesta() {
    int[][] matrizNueva = new int[cols][rens];

		for (int i = 0; i < cols; i++){
      for (int j = 0; j < rens; j++) {
		  	matrizNueva[i][j] = matriz[j][i];
		  }
		}

    return new Matriz(matrizNueva);
	}

}
