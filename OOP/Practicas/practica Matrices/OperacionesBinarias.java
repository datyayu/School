public class OperacionesBinarias {

  /**
   * Retorna la suma de dos matrices
   * @param  matrizA Matriz 1 a sumar
   * @param  matrizB Matriz 2 a sumar
   * @return         Suma de ambas matrices
   */
	public static Matriz suma (Matriz matrizA, Matriz matrizB) {
		int[][] matA  = matrizA.getMatriz();
		int[][] matB  = matrizB.getMatriz();
    int matA_cols = matrizA.getCols();
    int matA_rens = matrizA.getRens();  
    int matB_cols = matrizB.getCols();
    int matB_rens = matrizB.getRens();

    if (matA_cols != matB_cols || matA_rens != matB_rens) {
      System.out.println("Error, las dimensiones fueron incorrectas para esta operacionn\n");
      return null;
    }

		int[][] matC = new int[matA_rens][matA_cols];

		for (int i = 0; i < matA_rens; i++){
		  for (int j = 0; j < matA_cols; j++) {
		  	matC[i][j] = matA[i][j] + matB[i][j];
		  }
		}

		return new Matriz(matC);
	}


  /**
   * Retorna la resta de dos matrices
   * @param  matrizA Matriz 1 a restar
   * @param  matrizB Matriz 2 a restar
   * @return         Resta de ambas matrices
   */
	public static Matriz resta (Matriz matrizA, Matriz matrizB) {
    int[][] matA  = matrizA.getMatriz();
    int[][] matB  = matrizB.getMatriz();
    int matA_cols = matrizA.getCols();
    int matA_rens = matrizA.getRens();  
    int matB_cols = matrizB.getCols();
    int matB_rens = matrizB.getRens();

    if (matA_cols != matB_cols || matA_rens != matB_rens) {
      System.out.println("Error, las dimensiones fueron incorrectas para esta operacion\n\n");
      return null;
    }

    int[][] matC = new int[matA_rens][matA_cols];

		for (int i = 0; i < matA_rens; i++){
		  for (int j = 0; j < matA_cols; j++) {
		  	matC[i][j] = matA[i][j] - matB[i][j];
		  }
		}

		return new Matriz(matC);
	}


  /**
   * Retorna la multiplicar de dos matrices
   * @param  matrizA Matriz 1 a multiplicar
   * @param  matrizB Matriz 2 a multiplicar
   * @return         Multiplicar de ambas matrices
   */
	public static Matriz multiplicacion (Matriz matrizA, Matriz matrizB) {
		int[][] matA  = matrizA.getMatriz();
		int[][] matB  = matrizB.getMatriz();
  	int matA_cols = matrizA.getCols();
    int matA_rens = matrizA.getRens();  
    int matB_cols = matrizB.getCols();
    int matB_rens = matrizB.getRens();

    // Verifica que se puedan multiplicar
    if (matA_cols != matB_rens) {
      System.out.println("Error, las dimensiones fueron incorrectas para esta operacion\n\n");
      return null;
    }

    int[][] matC = new int[matA_rens][matB_cols];
    
    for (int i = 0; i < matA_rens; i++) {         // Renglones A
        for (int j = 0; j < matB_cols; j++) {     // Columnas B
            for (int k = 0; k < matA_cols; k++) { // Columnas A
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

		return new Matriz(matC);
	}
}
