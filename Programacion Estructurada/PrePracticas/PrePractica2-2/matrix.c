#include "matrix.h"


/** Matrix_createMatrix
 * Reserva el espacion en memoria para una matriz de MxN tamano.
 * 
 * @param   int         rows        Numero de filas de la matriz.
 * @param   int         columns     Numero de columnas de la matriz.
 * @return  double**                Puntero a la locacion en memoria de
 *                                  la matriz.
 */
double** Matrix_createMatrix(int rows, int columns)
{
    double** matrix = (double**) malloc((rows*columns)*sizeof(double));

    if(matrix != NULL)
    {
        int i;

        /* Aloja cada columna individualmente */
        for(i = 0; i < rows; i++)
        {
            matrix[i] = (double*) malloc(columns*sizeof(double));

            if(matrix[i] == NULL)
            {
                return NULL;
            }
        }
    }

    return matrix;
}

/** Matrix_deleteMatrix
 * Libera el espacio en memoria de una matriz.
 * 
 * @param   double**    matrix      Puntero a la matriz a liberar.
 * @param   int         rows        Numero de columnas de la matriz.
 */
void Matrix_deleteMatrix(double** matrix, int rows)
{
    int i;

    for(i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
}

/** Matrix_fillMatrix
 * Llena una matriz con numeros aleatorios del 1 al 10.
 * 
 * @param   double**    matrix      Puntero a la matriz a llenar.
 * @param   int         rows        Numero de filas de la matriz.
 * @param   int         columns     Numero de columnas de la matriz.
 */
void Matrix_fillMatrix(double** matrix, int rows, int columns)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            matrix[i][j] = (i + j);
        }
    }
}

/** Matrix_print
 * Imprime una matriz de MxN tamano.
 * 
 * @param   double**    matrix      Puntero a la matriz a imprimir.
 * @param   int         rows        Numero de filas de la matriz.
 * @param   int         columns     Numero de columnas de la matriz.
 */
void Matrix_print(double** matrix, int rows, int columns)
{
    int i, j;
    if(matrix != NULL)
    {
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < columns; j++)
            {
                printf("%.2lf ", matrix[i][j]);
            }
            putchar('\n');
        }
    }
    else
    {
        puts("Matriz invalida");
    }
}

/** Matrix_sum
 * Suma dos matrices del mismo tamano.
 * 
 * @param   double**    matrix1     Puntero a la primera matrix a sumar.
 * @param   int         rows1       Numero de filas de la primera matriz.
 * @param   int         columns1    Numero de columnas de la primera matriz.
 * @param   double**    matrix2     Puntero a la segunda matrix a sumar.
 * @param   int         rows2       Numero de filas de la segunda matriz.
 * @param   int         columns1    Numero de columnas de la segunda matriz.
 * @return  double**                Matriz resultada de la suma.
 */
double** Matrix_sum(double** matrix1, int rows1, int columns1, double** matrix2, int rows2, int columns2)
{
    if( rows1 == rows2 && columns1 == columns2 )
    {
        int i, j;

        /* Matriz Temporal para almacenar la suma */
        double **newMatrix = Matrix_createMatrix(rows1, columns1);
        
        for(i = 0; i < rows1; i++)
        {
            for(j = 0; j < columns1; j++)
            {
                newMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        return newMatrix;
    }
    else
    {
        return NULL;
    }
}

/** Matrix_sum
 * Resta dos matrices del mismo tamano.
 * 
 * @param   double**    matrix1     Puntero a la primera matrix a restar.
 * @param   int         rows1       Numero de filas de la primera matriz.
 * @param   int         columns1    Numero de columnas de la primera matriz.
 * @param   double**    matrix2     Puntero a la segunda matrix a restar.
 * @param   int         rows2       Numero de filas de la segunda matriz.
 * @param   int         columns1    Numero de columnas de la segunda matriz.
 * @return  double**                Matriz resultada de la resta.
 */
double** Matrix_difference(double** matrix1, int rows1, int columns1, double** matrix2, int rows2, int columns2)
{
    if( rows1 == rows2 && columns1 == columns2 )
    {
        int i, j;
        double **newMatrix = NULL;
        
        /* Matriz Temporal para almacenar la resta */
        newMatrix = Matrix_createMatrix(rows1, columns1);

        for(i = 0; i < rows1; i++)
        {
            for(j = 0; j < columns1; j++)
            {
                newMatrix[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        return newMatrix;
    }
    else
    {
        return NULL;
    }
}

/** Matrix_multiply
 * Multiplica dos matrices (matA x matB).
 * 
 * @param   double**    matrix1     Puntero a la matrix A a multiplicar.
 * @param   int         rows1       Numero de filas de la matriz A.
 * @param   int         columns1    Numero de columnas de la matriz B.
 * @param   double**    matrix2     Puntero a la matrix B a multiplicar.
 * @param   int         rows2       Numero de filas de la segunda matriz.
 * @param   int         columns1    Numero de columnas de la segunda matriz.
 * @return  double**                Matriz resultada de la multiplicacion.
 */
double** Matrix_multiply(double** matrix1, int rows1, int columns1, double** matrix2, int rows2, int columns2)
{
    if( rows1 == columns2 && columns1 == rows2)
    {   
        int i, j, k;
        /* Matriz Temporal para almacenar la suma */

        double **newMatrix = Matrix_createMatrix(rows1, columns2);
        
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < columns2; j++)
            {
                newMatrix[i][j] = 0;
                for (k = 0; k < columns1; k++)
                {
                    newMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
                }
            }
        }

        return newMatrix;
    }
    else
    {
        return NULL;
    }
}
