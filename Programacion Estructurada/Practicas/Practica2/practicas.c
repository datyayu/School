#include "practicas.h"


/** prePractica1
 * Crea un array del tamano especificado por el usuario y la promedia.
 * Despues, modifica el tamano de ese arreglo y lo vuelve a promediar 
 * en base al nuevo tamano.
 */
void prePractica1()
{
	float *array = NULL; // Balance a tratar.
    int arraySize;       // Tamano del arreglo.
    double average;      // Promedio del balance.

    // Recibe el input del usuario.
    puts("Capture el numero de elementos que desea");
    scanf("%d", &arraySize);

    // Crea un nuevo array en memoria dinamica.
    array = array_newArray(arraySize);

    if(array != NULL)
    {
        // Captura, promedia y muestra el promedio.
        array_captureArray(array, arraySize);
        array_getAverage(array, arraySize, &average);
        printf("El valor promedio es: %.2lf\n\n", average);

        //Cambia el tamano y vuelve a promediar.
        array_modifyArray(array, &arraySize, &average);
        printf("El nuevo valor promedio es: %.2lf\n\n", average);

        //Libera el espacio en memoria.
        free(array);
    }
    else
    {
        puts("Error al guardar el arreglo.");
    }
}

/** prePractica2
 * Realiza la suma, resta y multiplicacion de matrices de MxN tamano
 * alojadas en memoria dinamica
 */
void prePractica2()
{
    int rows = 3;
    int columns = 2;

    /* Inicializa matrices base */
    double** matrix1 = Matrix_createMatrix(rows, columns); // 3 x 2
    double** matrix2 = Matrix_createMatrix(rows, columns); // 3 x 2
    double** matrix3 = Matrix_createMatrix(columns, rows); // 2 x 3

    if(matrix1 != NULL && matrix2 != NULL && matrix3 != NULL)
    {
        Matrix_initializeSeed();

    	/* Llena las 3 matrices */
	    Matrix_fillMatrix(matrix1, rows, columns); 
	    Matrix_fillMatrix(matrix2, rows, columns);
	    Matrix_fillMatrix(matrix3, columns, rows);

        /* Imprime las 3 matrices */
        puts("M1");
        Matrix_print(matrix1, rows, columns);
        puts("\nM2");
        Matrix_print(matrix2, rows, columns);
        puts("\nM3");
	    Matrix_print(matrix3, columns, rows);

        /* Suma de M1 + M2 */
        puts("\nM1 + M2");
        double** sumMatrix = Matrix_sum(matrix1, rows, columns, 
                                        matrix2, rows, columns);
        Matrix_print(sumMatrix, rows, columns);

	    /* Resta de M2 - M1*/
	    puts("\nM1 - M2");
	    double** differenceMatrix = Matrix_difference(matrix1, rows, columns,
	    											  matrix2, rows, columns);
	    Matrix_print(differenceMatrix, rows, columns);

	    /* Multiplicacion de M1 * M3 */
	    puts("\nM1 * M3");
	    double** productMatrix = Matrix_multiply(matrix1, rows, columns,
	    										 matrix3, columns, rows);
	    Matrix_print(productMatrix, 3, 3); // Tamano de la resultante (3x3).
	}
	else
	{
		puts("Error inicializando.");
	}

	/* Libera la memoria */
    Matrix_deleteMatrix(matrix1, rows);
    Matrix_deleteMatrix(matrix2, rows);
    Matrix_deleteMatrix(matrix3, columns);
}