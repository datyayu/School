#include <stdio.h>
#include "matrix.h"


int main(void)
{
    int rows = 3;
    int columns = 2;

    /* Inicializa matrices base */
    double** matrix1 = Matrix_createMatrix(rows, columns);
    double** matrix2 = Matrix_createMatrix(rows, columns);
    double** matrix3 = Matrix_createMatrix(columns, rows);

    if(matrix1 != NULL && matrix2 != NULL && matrix3 != NULL)
    {
    	/* Llena las 3 matrices */
	    Matrix_fillMatrix(matrix1, rows, columns);
	    Matrix_fillMatrix(matrix2, rows, columns);
	    Matrix_fillMatrix(matrix3, columns, rows);

	    /* Suma de M1 + M2 */
	    puts("\nSuma");
	    double** sumMatrix = Matrix_sum(matrix1, rows, columns, 
	    								matrix2, rows, columns);
	    Matrix_print(sumMatrix, rows, columns);

	    /* Resta de M2 - M1*/
	    puts("\nResta");
	    double** differenceMatrix = Matrix_difference(matrix2, rows, columns,
	    											  matrix1, rows, columns);
	    Matrix_print(differenceMatrix, rows, columns);

	    /* Multiplicacion de M1 * M3 */
	    puts("\nMultiplicacion");
	    double** productMatrix = Matrix_multiply(matrix1, rows, columns,
	    										 matrix3, columns, rows);
	    Matrix_print(productMatrix, 3, 3); //Tamano de la matriz resultante.
	}
	else
	{
		puts("Error inicializando.");
	}

	/* Libera la memoria */
    Matrix_deleteMatrix(matrix1, rows);
    Matrix_deleteMatrix(matrix2, rows);
    Matrix_deleteMatrix(matrix3, columns);

    return 0;
}
